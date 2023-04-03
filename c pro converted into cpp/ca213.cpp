#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter the choice\n Sic \n Art\n";
    cin>>ch;

    switch(ch)
    {
       case 's':
              cout<<"Chem\nPhy\nEng";
              break;

       case 'A':
              cout<<"Mar\nHin\nGeo";
              break;
       default:
              cout<<"Other stream";
    }
}
