//------> LECTURE 19 : Abstract Base Class and Pure Virtual Function <---------//

#include <bits/stdc++.h>
using namespace std;

class Bird // Abstract Class
{
    public :
    int age;

    Bird(int data)
    {
        age = data;
    }

    virtual void Display() = 0;// Pure Virtual Function i.e. Derived class should need to implement this function according to their needs.
};

class Parrot : public Bird
{
    public :
    string Name;

    Parrot(string name, int age) : Bird(age)
    {
        Name = name;
    }

    void Display()
    {
        cout<<"Parrot"<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"I can fly !!"<<endl;
    }
};

class Ostrich : public Bird
{
    public :
    string Name;

    Ostrich(string name, int age) : Bird(age)
    {
        Name = name;
    }

    void Display()
    {
        cout<<"Ostrich"<<endl;
        cout<<"Name : "<<Name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"I cannot fly !!"<<endl;
    }
};

int main()
{
    Parrot p1("Mithu", 1);
    Parrot *p2 = &p1;
    p2->Display();

    cout<<endl;

    Ostrich o1("Chatur", 2);
    Ostrich *o2 = &o1;
    o2->Display();
    
    return 0;
}