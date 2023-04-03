#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the Number: ";
    cin>>a>>b;

    do
    {
        if(a%2==0)
        {
            cout<<a<<endl;
        }
        a++;
    }while(a<=b);
    return 0;
}
