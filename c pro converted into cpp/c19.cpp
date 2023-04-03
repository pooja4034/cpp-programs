#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int rn,en,hd,mr,t;
    float per;
    char nm[10];

    cout<<"Enter roll no:\n";
    cin>>rn;
    cout<<"Enter name:\n";
    cin>>nm;

    cout<<"Enter sub marks\n";
    cin>>en>>hd>>mr;

    t=en+hd+mr;
    per=(t/3);

    cout<<"roll no=\n"<<rn;
    cout<<"\nname=\n"<<nm;
    cout<<"\ntotal=\n"<<t;
    cout<<"\nper=\n"<<per;


}
