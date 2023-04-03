#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void pal(char []);
int main()
{
    char a[100];

    cout<<"Enter any String: "<<endl;
    cin>>a;

    pal(a);

}
void pal(char a[])
{
    char b[100];
    strcpy(b,a);
    strrev(a);

    if(strcmp(a,b)==0)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
}
