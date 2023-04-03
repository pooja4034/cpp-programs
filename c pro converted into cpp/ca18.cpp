#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int mar,hd,en,geo,his,t;
    float per;


    cout<<"Enter the subject marks\n";
    cin>>mar>>hd>>en>>geo>>his;

    t=mar+hd+en+geo+his;
    per=(t/5);

    cout<<"Total=\n"<<t;
    cout<<"\nPercentage=\n"<<per;

    return 0;
}
