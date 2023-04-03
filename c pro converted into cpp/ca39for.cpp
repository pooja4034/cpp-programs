#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,s=0;

    cout<<"Enter the Number: ";
    cin>>n;

    for(n=n;n>0;n=n/10)
    {
        r=n%10;
        s=s+r;

    }
    cout<<"sum= "<<s;
    return 0;
}
