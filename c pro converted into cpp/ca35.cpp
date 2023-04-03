#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i=1;

    while(i<=20)
    {
        if(i%3==0&&i%5==0)
        {
            cout<<i<<endl;
        }
        i++;
    }
    return 0;
}
