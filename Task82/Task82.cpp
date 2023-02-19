#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

void divide(float num)
{
    if (num == 0)
        throw std::invalid_argument("number cannot be zero");
    std::cout << (1024 / num) << endl;
}

class FileWasNotOpenedException : public std::exception
{
    std::string _msg;
public:
    FileWasNotOpenedException(const std::string& msg) : _msg(msg){}

    virtual const char* what() const noexcept override
    {
        return _msg.c_str();
    }
}; 

void readFile(string path)
{
    if (path == "0")
        throw FileWasNotOpenedException("file cannot read");
    std::cout << "file readed" << endl;
}

void parseMathString(string expression)
{
    int size = expression.size();
    float arg1 = expression[0] - '0';
    float arg2 = expression[2] - '0';
    if ((arg1 < 0 || arg2 < 0) || (arg1 > 9) || (arg2 > 9))
        throw std::invalid_argument("invalid expression format");  
    float result;
    switch (expression[1])
    {
    case '+':
        result = arg1 + arg2;
        break;
    case '-':
        result = arg1 - arg2;
        break;
    case '*':
        result = arg1 * arg2;
        break;
    case '/':
        if (arg2 == 0)
            throw std::invalid_argument("divided by zero");  
        result = arg1 / arg2;
        break;
    
    default:
        throw std::invalid_argument("invalid expression format");
        break;
    }
    
    std::cout << result << endl;
}

int main()
{
    // 1
    float num;
    std::cout << "Input number: ";
    std::cin >> num;
    try
    {
        divide(num);
    }
    catch(const std::invalid_argument& e)
    {
        std::cout << e.what() << endl;
    }
    std::cout << endl;

    // 2
    string path;
    std::cout << "Path to file: ";
    std::cin >> path;
    try
    {
        readFile(path);
    }
    catch(const FileWasNotOpenedException& e)
    {
        std::cout << e.what() << endl;
    }
    std::cout << endl;

    // 3
    string expression[] = { "1+2", "8-4", "8*4", "8/5", "8/0", "!+b" };
    for (int i = 0; i < 6; i++)
    {
        std::cout << expression[i] << ": ";
        try
        {
            parseMathString(expression[i]);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << endl;
        }       
    } 
}



//https://github.com/Trivin/LMS.git