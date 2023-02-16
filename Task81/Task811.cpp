#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Person
{
private:
    int age;
    int weight;
    string name;
    string gender;  
protected: 
    void setAge(int a) 
    {
        age = a;
    }
    void setWeight(int w) 
    {
        weight = w;
    }
    void setName(string n) 
    {
        name = n;
    }

public:
    int getAge()
    {
        return age;
    }
    int getWeight()
    {
        return weight;
    }
    string getName()
    {
        return name;
    }
    string getGender()
    {
        return gender;
    }

    Person(int a, int w, string n, string g) 
    {
        age = a;
        weight = w;
        name = n; 
        gender = g;
    }
};

class Student : public Person
{
private:
    int year;
public:
    void finish_year(int a, int w)
    {
        year++;
        setAge(a);
        setWeight(w);
    }
    int getYear()
    {
        return year;
    }

    Student(int a, int w, string n, string g, int y):Person(a,w,n,g)
    {
        year = y;
    }

    void Display()
    {
        cout << "Name: " << getName() << "\tAge: " << getAge() << "\tWeight: " << getWeight() << std::endl;
        cout << "Gender: " << getGender() << "\tYear: " << getYear() << std::endl;
    }
};

int main()
{
    Student stud(20, 60, "John", "male", 2);
    stud.Display();
    stud.finish_year(21, 65);
    stud.Display();
}

//https://github.com/Trivin/LMS.git