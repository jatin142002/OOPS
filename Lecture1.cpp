//------> LECTURE 1 : Classes, Objects and Access Modifier ( Public, Private(by default) ) <---------//

#include <bits/stdc++.h>
using namespace std;    

class Employee
{
    private:
    int a, b, c;

    public:
    int d, e;
    void setData(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void getData()
    {
        cout<<"Value of a is : "<<a<<endl;
        cout<<"Value of b is : "<<b<<endl;
        cout<<"Value of c is : "<<c<<endl;
        cout<<"Value of d is : "<<d<<endl;
        cout<<"Value of e is : "<<e<<endl;
    }
};  

// void Employee :: setData(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

int main()
{
    Employee obj1;

    obj1.setData(1, 2, 3);
    obj1.d = 4;
    obj1.e = 5;
    obj1.getData();

    return 0;
}