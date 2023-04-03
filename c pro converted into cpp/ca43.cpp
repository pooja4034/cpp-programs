#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[10],i,p=0,n=0,z=0;

    for(i=1;i<10;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<10;i++)
    {
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    cout<<"Positive= "<<p<<endl<<"Negative= "<<n<<"Zero= "<<endl<<z;
    return 0;

}
