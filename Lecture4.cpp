//------> LECTURE 4 : Friend Class in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
    public:

    int CalSum(int a, int b)
    {
        return a+b;
    }

    int CalRealSum(Complex , Complex);

    int CalImagSum(Complex, Complex);
};

class Complex
{
    private:
    int a, b;

    public:

    friend class Calculator;

    void setData(int a1, int b1)
    {
        a=a1;
        b=b1;
    }

    void getData()
    {
        cout<<"The complex number is = "<<a<<" + i"<<b<<endl;
    }

};

int Calculator :: CalRealSum(Complex c1, Complex c2)
{
    return c1.a+c2.a;
}

int Calculator :: CalImagSum(Complex c1, Complex c2)
{
    return c1.b+c2.b;
}


int main()
{
    Complex o1;
    o1.setData(10, 20);
    o1.getData();

    Complex o2;
    o2.setData(40, 30);
    o2.getData();

    Calculator cl;
    cout<<"Sum of real part : "<<cl.CalRealSum(o1, o2)<<endl;
    cout<<"Sum of imaginery part : "<<cl.CalImagSum(o1, o2)<<endl;

    return 0;
}