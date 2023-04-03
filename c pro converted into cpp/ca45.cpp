#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[6],i;

    cout<<"Enter Array element: "<<endl;

    for(i=0;i<6;i=i+2)
    {
        cin>>a[i];
    }
    for(i=0;i<6;i++)
    {
        if(i%2==1)
        {
            a[i]=a[i-1]*a[i-1];
        }
        cout<<i;
    }
    return 0;
}
