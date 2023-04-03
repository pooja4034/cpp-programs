#include<iostream>
#include<stdio.h>
using namespace std;
void cir(float);
int main()
{
    float pi=3.14;
    cir(pi);
}
void cir(float pi)
{
    int r;
    float a,cur;

    cout<<"Enter the r"<<endl;
    cin>>r;

    a=pi*r*r;
    cur=2*pi*r;

    cout<<"area= "<<a<<endl<<"cir= "<<cur<<endl;
}
