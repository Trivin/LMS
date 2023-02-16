#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::endl;
using std::string;

class Person
{
private:

    // 0 - professor
    // 1 - worker
    // 2 - student
    int access;
    string name;
protected:
    void setAccess(int a)
    {
        access = a;
    }
public:
    int getAccess()
    {
        return access;
    }
    string getName()
    {
        return name;
    }

    Person(string n) 
    {
        name = n; 
    }
};

class Student : public Person
{
public:
    Student(string n):Person(n)
    {
        setAccess(2);
    }
};

class Worker : public Person
{
public:
    Worker(string n):Person(n)
    {
        setAccess(1);
    }
};

class Professor : public Person
{
public:
    Professor(string n):Person(n)
    {
        setAccess(0);
    }
};

bool goToScienceLab(Person pers)
{
    if (pers.getAccess() == 0)
    {
        cout << "Access granted for " << pers.getName() << std::endl;
    }
    else
    {
        cout << "Access denied for " << pers.getName() << std::endl;
    }
}

int getDiningRoomDiscount(Person pers)
{
    int disc = 0;
    switch (pers.getAccess())
    {
    case 0:
        disc = 20;
        break;
    case 1:
        disc = 10;
        break;
    default:
        break;
    }

    return disc;
}

void buySandwich(Person pers)
{
    float basePrice = 89;
    float discount = getDiningRoomDiscount(pers)*0.01*basePrice;
    float price = basePrice - discount;
    cout << pers.getName() << " buy sandwich for " << round(price*100)/100 << std::endl;
}

int main()
{
    Student stud = Student("John");
    Worker work = Worker("Stan");
    Professor prof = Professor("Alex");

    cout << "Science lab: " << std::endl;
    goToScienceLab(stud);
    goToScienceLab(work);
    goToScienceLab(prof);
    cout << std::endl;
    
    buySandwich(stud);
    buySandwich(work);
    buySandwich(prof);
}

//https://github.com/Trivin/LMS.git