//------> LECTURE 7 : Constructor with Default Arguments in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int a, b;

    public:

    Complex() 
    {
        a = 10;
        b = 20;
    }

    Complex(int a1, int b1=10) // This is a parameterized constructor as it accepts two parameters.
    {
        a = a1;
        b = b1;
    }


    void getData()
    {
        cout<<"The complex number is = "<<a<<" + i"<<b<<endl;
    }

};



int main()
{
    Complex o1;
    o1.getData();

    Complex o2(30, 40);
    o2.getData();

    Complex o3(30);
    o3.getData();

    return 0;
}
