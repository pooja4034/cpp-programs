#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[5],i,j,t;

    cout<<"Enter Array Elements: "<<endl;

    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=1+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }

    }
    return 0;
}
