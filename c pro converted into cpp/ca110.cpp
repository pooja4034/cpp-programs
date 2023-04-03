#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int id,bs;
    char name[10];
    float da,hra,ta,gs,Itax,ns;

    cout<<"Enter ID:\n";
    cin>>id;
    cout<<"Enter Name:\n";
    cin>>name;
    cout<<"Enter Basic Salary:\n";
    cin>>bs;

    da=bs*0.05;
    hra=bs*0.12;
    ta=bs*0.08;
    gs=bs+hra+da+ta;
    ns=gs-Itax;

    cout<<"da=\n"<<da;
    cout<<"hra=\n"<<hra;
    cout<<"ta=\n"<<ta;
    cout<<"gs=\n"<<gs;
    cout<<"Itax=\n"<<Itax;
    cout<<"ns=\n"<<ns;

    return 0;
}
