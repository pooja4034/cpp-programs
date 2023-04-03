#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,s=0;

    cout<<"Enter the Number: ";
    cin>>n;

    do
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }while(n>0);
    cout<<"sum= "<<s;
    return 0;
}
