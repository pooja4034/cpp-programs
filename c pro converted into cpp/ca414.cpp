#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int i,l,v=0;
    char a[10];

    cout<<"Enter any String: ";
    gets(a);

    l=strlen(a);

    for(i=0;i<l;i++)
    {

        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            v++;
        }

    }
cout<<"Vowel="<<v;
        return 0;
}
