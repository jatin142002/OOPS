//------> LECTURE 12 : Protected Access Modifier <---------//

#include <bits/stdc++.h>
using namespace std;

/*
                        Private Derivation      Protected Derivation      Public Derivation
    1. Private      :       Not Inherited           Not Inherited              Not Inherited 
    2. Protected    :       Private                 Protected                  Protected 
    3. Public       :       Private                 Protected                  Public


    Protected Data memebers are same as private that is they cannnot be accessed outside directly we
    need function for them but the thing is private data members cannot be inherited but protected can
    be inherited.
*/

class Base
{
    private :
    int a;

    protected :
    int b;

    public :
    void setData(int a1, int b1)
    {
        a = a1;
        b = b1;
    }

    void getData()
    {
        cout<<"The number a : "<<a<<endl;
        cout<<"The number b : "<<b<<endl;
    }
};

class Derived : protected Base
{
    public:
    int c;

    void setData1(int c1, int b1)
    {
        c = c1;
        b = b1;
    }

    void getData1()
    {
        cout<<"The number c : "<<c<<endl;
        cout<<"The number b : "<<b<<endl;
    }
};

int main()
{
    Base obj1;
    obj1.setData(10,20);
    obj1.getData();

    Derived obj2;
    obj2.setData1(100,200);
    obj2.getData1();

    return 0;
}