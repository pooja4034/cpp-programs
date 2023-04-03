#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char a[10];

    cout<<"Enter the String: ";

    gets(a);
    puts(a);
    strupr(a);

    cout<<a;
    return 0;
}
