//------> LECTURE 10 : Inheritance and Visibility Mode in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee
{
    public:
    int id;
    int salary;

    Employee()
    {
        cout<<"Deafult Constructor is called !!"<<endl;
    }

    Employee(int id1, int salary1=40000)
    {
        cout<<"Parameterized Constructor is called !!"<<endl;
        id = id1;
        salary = salary1;
    }
};

/*
    Derived Class

    1. Syntax:
       class {{Derived Class Name}} : {{Visibility Mode}} {{Base Class Name}}
       {

       };

    2. Default visibility mode is private

    3. Public Visibility Mode : Public members of the base class become public members of the derived class.

    4. Private Visibility Mode : Public members of the base class become private member of the derived class.

    5. Private members of the base class cannot be inherited.   

*/

class Programmer : public Employee
{
    public :
    string langCode;

    Programmer(int id1, string langcode1)
    {
        langCode = langcode1;
        id = id1;
    }

    void getData()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"LangCode : "<<langCode<<endl;
    }

};

int main()
{
    Employee e1, e2(2);

    Programmer p1(10, "CPP");

    p1.getData();

    return 0;
}
