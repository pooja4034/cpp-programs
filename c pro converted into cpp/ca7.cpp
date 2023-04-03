#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,tmp;

    cout<<"Enter a and b\n";
    cin>>a>>b;

    tmp=a;
    a=b;
    b=tmp;

    cout<<"After swap\n"<<a<<endl<<b;

    return 0;
}
