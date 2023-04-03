#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i=1,dm;
    char name[20];

    cout<<"Enter the Name: ";
    cin>>name;

    cout<<"Enter the demand: ";
    cin>>dm;

    do
    {
        cout<<name<<endl;
        i++;
    }while(i<=dm);
    return 0;
}
