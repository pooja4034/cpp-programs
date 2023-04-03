#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,c=0,n;

    cout<<"Enter the No: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
    return 0;
}
