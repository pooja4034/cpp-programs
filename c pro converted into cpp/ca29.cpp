#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i1,i2,i3;

    cout<<"Enter the Three Number: ";
    cin>>i1>>i2>>i3;

    if(i1>=0&&i1<=9)
        cout<<"One Digit";
    else if(i2>=10&&i2<=100)
        cout<<"Two Digit";
    else if(i3>=100&&i3<=1000)
            cout<<"Three Digit";
    else
        cout<<"More Than Three Digit";

}
