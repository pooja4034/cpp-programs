#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int r,area,cir;

    cout<<"Enter the radius\n";
    cin>>r;

    area=3.14*r*r;
    cir=2*3.14*r;

    cout<<"area=\n"<<area;
    cout<<"circumference=\n"<<cir;

    return 0;


}
