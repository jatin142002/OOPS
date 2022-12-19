//------> LECTURE 9 : Destructor in CPP <---------//

#include <bits/stdc++.h>
using namespace std;

class Number
{
    private:
    static int count;

    public:

    Number()
    {
        count += 1;
        cout<<"Constructor is called !!"<<" "<<count<<endl;
    }

    // Destructor never takes an argumnet unlike constructor and also never return any value.
    ~Number()
    {
        count -= 1;
        cout<<"Destructor is called !!"<<" "<<count<<endl;
    }
};

int Number :: count;


int main()
{
    Number x;

    {
        cout<<"Entering the block"<<endl;

        Number y;
        Number z;

        cout<<"exiting the block"<<endl;
    }

    return 0;
}
