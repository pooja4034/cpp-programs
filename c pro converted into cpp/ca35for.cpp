#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;

    for(i=1;i<=20;i++)
    {
        if(i%3==0&&i%5==0)
        {
            cout<<i<<endl;
        }

    }
    return 0;
}
