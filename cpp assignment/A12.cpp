#include<iostream>
#include<stdio.h>
using namespace std;
float area(float);
float cr(float);
int main()
{
    float r,a,c;

    cout<<"Enter the Number: ";
    cin>>r;

    a=area(r);
    cout<<"area of circle= "<<a;
    c=cr(r);
    cout<<"circumference= "<<c;
}
float area(float r)
{
    float ar;
    ar=3.14*r*r;
    return ar;
}
float cr(float r)
{
    float cur;
    cur=2*3.14*r;
    return cur;
}
