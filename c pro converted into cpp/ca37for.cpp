#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the Number: ";
    cin>>a>>b;

    for(a=a;a<=b;a++)
    {
        if(a%2==0)
        {
            cout<<a<<endl;
        }

    }
    return 0;
}
