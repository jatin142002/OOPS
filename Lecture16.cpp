//------> LECTURE 16 : Constructors in Derived Classes <---------//

#include <bits/stdc++.h>
using namespace std;

/*
    Case 1:

    class B : public A
    {
        // Order of execution of contructor is : A() ---->  B()
    };

    Case 2:

    class C : public B, public A
    {
        // Order of execution of constructor is : B() ----> A() ----> C()
    };

    Case 3:

    class C : public B, virtual public A
    {
        // Order of execution of constructor is : A() ----> B() ----> C()

        No matter what virtual base class constructor will be called first .
    };
*/

class Base1
{
    public:

    int data1;

    Base1(int data)
    {
        data1 = data;
        cout<<"Cosntructor of Base1 is called"<<endl;
    }
};

class Base2
{
    public:

    int data2;

    Base2(int data)
    {
        data2 = data;
        cout<<"Constructor of Base2 is called"<<endl;
    }
};

class Derived : public Base1, public Base2
{
    public:

    int data3;

    Derived(int a, int b, int c) : Base1(a), Base2(b)
    {
        data3 = c;
        cout<<"Constructor of derived class is called"<<endl;
    }

    void Show()
    {
        cout<<"Data1 : "<<data1<<endl;
        cout<<"Data2 : "<<data2<<endl;
        cout<<"Data3 : "<<data3<<endl;
    }
};

int main()
{
    Derived d1(10, 20, 30);
    d1.Show();

    return 0;
}