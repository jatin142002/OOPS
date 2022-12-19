//------> LECTURE 11 : Single Inheritance in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

class Base
{
    private:
    int data1;

    public:
    int data2;

    Base()
    {
        cout<<"Base Class Constructor is called !!"<<endl;
    }

    void setData()
    {
        data1 = 10;
        data2 = 20;
    }

    int getData1()
    {
        return data1;
    }

    int getData2()
    {
        return data2;
    }
};

class Derived : public Base
{
    private:
    int data3;

    public:

    Derived()
    {
        cout<<"Derived Class constructor is called !!"<<endl;
    }

    void Process()
    {
        data3 = getData1()*data2;
    }

    int getData3()
    {
        return data3;
    }

};

int main()
{
    Derived d1;
    d1.setData();
    d1.Process();
    cout<<"Data1 : "<<d1.getData1()<<endl;
    cout<<"Data2 : "<<d1.getData2()<<endl;
    cout<<"Data3 : "<<d1.getData3()<<endl;
    return 0;
}