//------> LECTURE 6 : Constructor and Constructor Overloading in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int a, b;

    public:

    // Creating a constructor.
    // Constructor is a special memeber function with the same name as of class.
    // It is used to initalize the objects of its class.
    // It is automatically invoked whenever an object is created.

    Complex() // Default Constructor as it takes no parameter
    {
        a = 10;
        b = 20;
    }

    Complex(int a1, int b1) // This is a parameterized constructor as it accepts two parameters.
    {
        a = a1;
        b = b1;
    }

    Complex(int a1) // Parameterized constructor as it accespts one parameter.
    {
        a = a1;
        b = 10;
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

    Complex o2(30, 40); // Implicit Call
    o2.getData();

    Complex o3 = Complex(30, 40); //  Explicit Call
    o3.getData();

    Complex o4(50);
    o4.getData();

    return 0;
}

/*

    Characteristics of constructor :
    1. It should be defined in the public section of the class.
    2. It does not have any return type.
    3. It can have default arguments.
    4. Cannot refer to their address.
*/