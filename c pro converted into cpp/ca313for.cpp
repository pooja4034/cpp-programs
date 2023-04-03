#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,a,b,c,n;

    cout<<"Enter any value a and b: ";
    cin>>a>>b;
    cout<<"Enter No: ";
    cin>>n;
    cout<<"Fibbo seri\n";

    for(i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return 0;
}
