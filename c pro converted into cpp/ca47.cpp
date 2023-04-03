#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a[2][2]={{1,2},{3,4}},i,j;

    cout<<"2 D Array:"<<endl;

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
