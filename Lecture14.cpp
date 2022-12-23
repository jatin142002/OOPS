//------> LECTURE 14 : Multiple Inheritance <---------//

/*
    Similar to the case of :

  (parent of child) Father   Mother (parent of child)
                     \      /
                      \   /
                       \/
                      Child
    (Child is derived from both father and mother)   
*/

#include <bits/stdc++.h>
using namespace std;

class Base1
{
    protected :
    int num1;

    public :
    void setData1(int data)
    {
        num1 = data;
    }

    void showData()
    {
        cout<<"Num1 : "<<num1<<endl;
    }
};

class Base2
{
    public :
    int num2;

    void setData2(int data)
    {
        num2 = data;
    }
};

class Derived : public Base1, public Base2
{
    public :
    void showSum()
    {
        cout<<"Sum : "<<num1+num2<<endl; 
    }
};


int main()
{
    Derived obj1;

    obj1.setData1(100);
    obj1.setData2(200);

    obj1.showData();
    cout<<"Num2 : "<<obj1.num2<<endl;

    obj1.showSum();

    return 0;
}