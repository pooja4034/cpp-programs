#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter the Number\n";
    cin>>a>>b>>c;

    if(a>b&&b>c)
    {
        cout<<"a is biggest";

        if(b>c)
        {
            cout<<"c smallest";
        }
        else
        {
            cout<<"b is smallest";
        }
    }
    else if(b>a&&b>c)
    {
        cout<<"b is biggest";

        if(a>c)
        {
            cout<<"c is smallest";
        }
        else
        {
            cout<<"a is smallest";
        }

    }
    else
    {
        cout<<"c is smallest";

        if(a>b)
        {
            cout<<"b is smallest";
        }
        else
        {
            cout<<"a is smallest";
        }
    }
    return 0;
}
