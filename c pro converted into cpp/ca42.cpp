#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[5],i,sum=0;

    cout<<"Enter the Number: ";

    for(i=1;i<5;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"sum= "<<endl<<sum;

    return 0;
}
