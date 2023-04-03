#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[2][2],i,j;

    cout<<"Enter Array Elements:"<<endl;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Transpose Matrix 2D Array Elements: "<<endl;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
