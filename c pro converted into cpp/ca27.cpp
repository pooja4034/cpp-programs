#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter the char: ";
    cin>>ch;

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        cout<<"Char is vowel";
    else
        cout<<"Char is not vowel";
}
