#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[5],i,Max =0;

    for(i=1;i<=5;i++)
    {
        cin>>a[i];
    }
    if(a[i]>Max)
    {
        Max = a[i];
        cout<<"max= "<<Max;
    }
    return 0;
}
