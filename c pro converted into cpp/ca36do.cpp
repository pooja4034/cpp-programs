#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int i,no,t;

    cout<<"Enter no\n";
    cin>>no;

    do
    {
        t=no*i;
        cout<<t<<endl;
        i++;
    }while(no<=10);
    return 0;
}
