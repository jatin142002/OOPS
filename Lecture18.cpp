//------> LECTURE 17 : Virtual Functions in OOPS <---------//

/*
    Rules for VIRTUAL FUNCTIONS
    ---------------------------
    1. They cannot be static
    2. They are accessed by object pointers
    3. Virtual Function can be a friend of another class
    4. Virtual FUnction in base class might not be used
    5. If a virtual function is defined in base class then there is no need of redefining it in the derived class. 
*/

#include<bits/stdc++.h>
using namespace std;

class Base
{
    public : 
    int var_base = 5;

    virtual void Display()  // Addition of virtual allow it to change default behaviour
    {                       
        cout<<"Var Base : "<<var_base<<endl;
    }
};

class Derived : public Base
{
    public :
    int var_derived = 6;

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

    ptr1 = &obj2; 

    ptr1->var_base = 10;
    ptr1->Display();  
    // Since it is pointing to the object of derived class then display of derived will execute 
    // this is because we have made the display() of base as virtual function. So, it will bind 
    // the display() of the object to which pointer is pointing. This is RUN TIME POLYMORPHISM

   

    ptr2 = &obj2;

    ptr2->var_base = 100;
    ptr2->var_derived = 200;
    ptr2->Display(); 

 
    return 0;
}