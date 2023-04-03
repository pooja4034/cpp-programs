#include<iostream>
#include<stdio.h>
using namespace std;
int table(int);
int main()
{
    int i,j,n;
    cout<<"\nEnter number:";
    cin>>j;

    table(j);
    return 0;
}
int table(int j)
{
    int i;
    for(i=1;i<=10;i++)
    {
        cout<<"\n"<<i<<"*"<<j<<"="<<i*j;
    }
}
