#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int age;

    cout<<"Enter the age: ";
    cin>>age;

    if(age>0&&age<12)
        cout<<"still child";
    else if(age>=12&&age<=21)
        cout<<"Enjoy life Teenagers";
    else if(age>=21&&age<=40)
        cout<<"You are Responsible Adult";
    else if(age>=40&&age<=70)
        cout<<"Respected Senior Citizen";
    else
        cout<<"Enough on Earth , Better to check out";
}
