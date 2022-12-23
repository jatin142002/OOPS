//------> LECTURE 14 : Virtual Base Class <---------//

/*
    A ------> B
    A ------> C
    B ------> D
    C ------> D

    here we are seeing that D is derived from B and C and B and C are derived from A. So, this will 
    create ambiguity for D because now it will have two instances of A. So, to solve this problem
    we will declare A as VIRTUAL BASE CLASS when we will derive B and C from it.
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
    protected:
    int roll;

    public:

    void setRoll(int data)
    {
        roll = data;
    }

    void showRoll()
    {
        cout<<"Roll Number : "<<roll<<endl;
    }
};

class Academics : virtual public Student
{
    public :
    int marks1;

    void setAca(int data)
    {
        marks1 = data;
    }
};

class Sports : virtual public Student
{
    public :
    int marks2;

    void set_Sports(int data)
    {
        marks2 = data;
    }
};

class Result : public Academics, public Sports
{
    public :

    void showResult()
    {
        cout<<"Academics : "<<marks1<<endl;
        cout<<"Sports : "<<marks2<<endl;
    }
};

int main()
{
    Result r1;
    r1.setRoll(14);
    r1.showRoll();
    r1.setAca(95);
    r1.set_Sports(99);
    r1.showResult();
    
    return 0;
}