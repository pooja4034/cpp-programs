#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,dm;
    char name[20];

    cout<<"Enter the Name: ";
    cin>>name;

    cout<<"Enter the demand: ";
    cin>>dm;

    for(i=1;i<=dm;i++)
    {
        cout<<name<<endl;
    }
    return 0;
}
