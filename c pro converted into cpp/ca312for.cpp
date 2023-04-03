#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,c;

    for(i=1;i<=50;i++)
    {
        c=0;

        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
