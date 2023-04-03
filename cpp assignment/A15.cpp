#include<iostream>
#include<stdio.h>
using namespace std;
int prime(int);
int main()
{
    int n,c;

    cout<<"Enter the Number: ";
    cin>>n;

    c=prime(n);

    if(c==2)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not prime";
    }
}
int prime(int n)
{
    int i,count=0;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    return count;
}
