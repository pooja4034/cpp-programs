#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter the char: ";
    cin>>ch;

    if(ch=='A'&&ch=='Z')
        cout<<"Char is Uppercase";
    else
        cout<<"Char is Lowercase";
}
