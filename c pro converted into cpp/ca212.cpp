#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter the Number: ";
    cin>>a>>b>>c;

    if(a==b&&b==c)
        cout<<"This is equilateral";
    else if(a==b||b==c||c==a)
        cout<<"This is isocleus";
    else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
        cout<<"This is scalen";
    else
        cout<<"This is right angle triangle ";
}
