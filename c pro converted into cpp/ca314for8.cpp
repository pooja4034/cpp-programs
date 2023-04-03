#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j;

    for(i=1;i<=4;i++)
    {
        for(j=i;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
