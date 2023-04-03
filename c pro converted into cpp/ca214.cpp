#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,ch;

    cout<<"Enter the choice\n1.Even and odd\n2.Positive and Negative\n";
    cout<<"Enter the choice";
    cin>>ch;

    switch(ch)
    {
        case 1:
             cout<<"Enter the No\n";
              cin>>i;
              if(i%2==0)
                cout<<"Even";
              else
                cout<<"Odd";
              break;

      case 2:
           cout<<"Enter the No\n";
             cin>>i;
             if(i>0)
                cout<<"Positive";
             else
                cout<<"Negative";
             break;

      default:
           cout<<"Other";
    }


}
