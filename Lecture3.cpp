//------> LECTURE 3 : Friend Function in CPP <---------//

/*
        Properties of Friend Function :
        1. Not in the scope of class
        2. Cannot be called from the object of that class i.e. obj1.sumComplex() => INVALID
        3. Can be invoked without the help of any object
        4. Usually contains the arguments as an object
*/

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int a, b;

    public:

    // This line signifies that non member function sunComplex is friend of class Complex 
    // i.e. it is allowed to use the private data members of the class

    friend Complex sumComplex(Complex o1, Complex o2);

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

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData(o1.a+o2.a, o1.b+o2.b);
    return o3;
}

int main()
{
    Complex o1;
    o1.setData(10, 20);
    o1.getData();

    Complex o2;
    o2.setData(40, 30);
    o2.getData();

    Complex o3 = sumComplex(o1, o2);
    o3.getData();
    
    return 0;
}