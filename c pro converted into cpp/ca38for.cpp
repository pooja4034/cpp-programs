#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,r,s=0;

    cout<<"Enter the no: ";
    cin>>n;

    for(n=n;n>0;n=n/10)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    cout<<"rev= "<<s;
    return 0;
}
