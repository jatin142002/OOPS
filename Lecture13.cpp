//------> LECTURE 13 : Multilevel Inheritance <---------//

/*
    Similar to the case of :

    Grand parents      ------->      Parents         --------->     Children
        A                               B                              C
    (Base Class of B)           (Base Class of C)               (Derived Class of B)
                               (Derived Class of A)  
*/

#include <bits/stdc++.h>
using namespace std;

class Student
{
    private:
    string name;

    protected:
    int roll;

    public:
    int division;

    void setData(string name1, int roll1, int division1)
    {
        name = name1;
        roll = roll1;
        division = division1;
    }

    void showName()
    {
        cout<<"Name : "<<name<<endl;
    }
};

class Exam : public Student
{
    public :
    int maths;
    int science;

    void setData1(int maths1, int science1)
    {
        maths = maths1;
        science = science1;
    }
};

class Result : public Exam
{
    public :
    void showResult()
    {
        showName();
        cout<<"Roll No. : "<<roll<<endl;
        cout<<"Class : "<<division<<endl;
        cout<<"Maths Marks : "<<maths<<endl;
        cout<<"Science Marks : "<<science<<endl;
    }
};


int main()
{
    Student s1;
    s1.setData("Jatin", 14, 12);
    s1.showName();

    Exam e1;
    e1.setData1(95, 98);
    e1.setData("Mehra", 19, 2);
    cout<<e1.maths<<" "<<e1.science<<" "<<e1.division<<" "<<s1.division<<endl;

    Result r1;
    r1.setData("Yash", 99, 11);
    r1.setData1(100, 100);
    r1.showResult();

    return 0;
}