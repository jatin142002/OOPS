//------> LECTURE 2 : Static Data Member and Static Member Function <---------//

// Static Data Members are created if we want to make common variable for all objects of same class. 
// Static Memeber Function are created if we want to make function which uses only static variables and functions.
// Static Memeber Function can be accessed only with the name of class also.
// Static Data Member and Static Member Function are class properties not object properties.

#include <bits/stdc++.h>
using namespace std;

class Employee
{
    private:
    int id;
    static int count;

    public:
    void setData(int n)
    {
        id = n;
        count += 1;
    }

    void getData()
    {
        cout<<"ID of this employee is "<<id<<endl;
    }

    static void getCount()
    {
        cout<<"Total no. of employees are "<<count<<endl;
    }

};

int Employee :: count; // Static variables are initialized with 0 by  default
// int Employee :: count = 10; -----> initialized with 10

int main()
{
    Employee e1;

    e1.setData(1);
    e1.getData();
    Employee::getCount(); //--> Static memeber function can be accessed with class name also.

    Employee e2;

    e2.setData(2);
    e2.getData();
    e2.getCount(); 

    return 0;
}