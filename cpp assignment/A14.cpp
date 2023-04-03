#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void lowercase(char []);
int main()
{
	char a[10];
    cout<<"Enter the string ";
    cin>>a;

	lowercase(a);
	cout<<a<<endl;

}
void lowercase(char a[])
{


    strupr(a);
}
