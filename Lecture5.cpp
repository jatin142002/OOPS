//------> LECTURE 5 : Friend Class in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

// Forwar Declaration
class Y;

class X
{
    private:
    int x;

    public:

    friend int Sum_X_Y(X, Y);

    void setVal(int x1)
    {
        x = x1;
    }
};

class Y
{
    private:
    int y;

    public:

    friend int Sum_X_Y(X, Y);

    void setVal(int y1)
    {
        y = y1;
    }
};

int Sum_X_Y(X a, Y b)
{
    return a.x+b.y;
}


int main()
{
    X x1;
    x1.setVal(10);

    Y y1;
    y1.setVal(40);

    cout<<"Sum of X and Y is : "<<Sum_X_Y(x1, y1)<<endl;

    return 0;
}