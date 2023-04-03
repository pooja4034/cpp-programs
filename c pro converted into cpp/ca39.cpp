#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,s=0;

    cout<<"Enter the Number: ";
    cin>>n;

    while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    cout<<"sum= "<<s;
    return 0;
}
