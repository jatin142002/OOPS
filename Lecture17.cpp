//------> LECTURE 17 : Polymorphism in OOPS <---------//

   /*
        Polymorphism -->  One name multiple form
        eg :- Function Overloading, Operator Overloading, Virtual Functions

        Two types of polymorphism :- i) Compile Time Polymorphism , ii) Run TIme Polymorphism

        Compile Time Polymorphism (Early Binding):- Function Overloading, Operator Overloading

        Run Time Polymorphism (Late Binding):- Virtual Functions
    */

#include<bits/stdc++.h>
using namespace std;

class Base
{
    public : 
    int var_base;

    void Display()
    {
        cout<<"Var Base : "<<var_base<<endl;
    }
};

class Derived : public Base
{
    public :
    int var_derived;

    void Display()
    {
        cout<<"Var Base : "<<var_base<<endl;
        cout<<"Var Derived : "<<var_derived<<endl;
    }
};

int main()
{

    Base obj1;
    Derived obj2;

    Base *ptr1;
    Derived *ptr2;

    ptr1 = &obj2; // ---> base class pointer pointing to derived class object can access only base class members through it.

    ptr1->var_base = 10;
    ptr1->Display(); // ---> This is will execute display() of base class

    //ptr1->var_derived = 20; INVALID

    ptr2 = &obj2;

    ptr2->var_base = 100;
    ptr2->var_derived = 200;
    ptr2->Display();  // ---> This will execute display() of derived class

    // It is known to us which display will execute this is COMPLILE TIME POLYMORPHISM --> Default Behaviour

    // Next will study RUN TIME POLYMORPHISM USING VIRTUAL FUNCTIONS
 
    return 0;
}