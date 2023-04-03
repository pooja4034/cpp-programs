#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i=1;

    do
    {
        if(i%3==0&&i%5==0)
        {
            cout<<i<<endl;
        }
        i++;
    }while(i<=20);
    return 0;
}
