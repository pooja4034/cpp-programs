#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[2],b[2],c[2],i;

    cout<<"Enter Array Elements:"<<endl;

    for(i=0;i<2;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter Array Elements: ";
    for(i=0;i<2;i++)
    {
        c[i]=a[i]+b[i];
        cout<<c[i];
    }
    return 0;
}
