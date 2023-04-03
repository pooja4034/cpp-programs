#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char i,j;

    for(i='a';i<='d';i++)
    {
        for(j='a';j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
