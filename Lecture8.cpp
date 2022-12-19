//------> LECTURE 8 : Copy Constructor in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

class Number
{
    private:
    int num;

    public:
    Number()
    {
        num = 10;
    }

    Number(int num1)
    {
        num = num1;
    }

    // NOTE : When no copy constructor is found then compiler calls its own copy constructor.
    // i.e. then num = obj.num will execute but this cout will execute bcoz it is not in compiler's copy constructor.

    Number(Number& obj)
    {
        cout<<"Copy Constructor is called !!"<<endl;
        num = obj.num;
    }

    void Show()
    {
        cout<<"Num of this number is : "<<num<<endl;
    }

};



int main()
{
    Number x, y, z(45), z2;

    x.Show();
    y.Show();
    z.Show();

    Number z1(z); // Copy Constructor is invoked 
    z1.Show();

    z2 = z; // Copy Constructor is not invoked bcoz it was already initialized at time of declaration.
    z2.Show();

    Number z3 = z; // Copy constructor is invoked
    z3.Show();

    return 0;
}
