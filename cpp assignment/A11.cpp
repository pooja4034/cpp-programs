#include<iostream>
#include<conio.h>
using namespace std;
void fact();
int main()
{
    fact();
}
void fact()
{
    int i,f=1,n;

    cout<<"Enter the Number: "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    cout<<"Factorial= "<<f<<endl;
}


