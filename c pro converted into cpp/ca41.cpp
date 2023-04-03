#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],i;

    cout<<"Enter any element: ";

    for(i=0;i<=10;i++)
    {
        cin>>a[i];
    }
    cout<<"Array"<<endl;

    for(i=0;i<10;i++)
    {
        cout<<endl<<a[i];
    }
    return 0;
}
