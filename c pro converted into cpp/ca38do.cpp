#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,s=0;

    cout<<"Enter the no: ";
    cin>>n;

    do
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }while(n>0);
    cout<<"rev= "<<s;
    return 0;
}
