#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
struct emp
{
    int id;
    char nm[10];
}p;
int main()
{

   cout<<"Enter the Name and ID of Employee: "<<endl;
   cin.get(p.nm, 10)>>endl;
   cin>>p.id;

   cout<<"Id= "<<p.id<<endl<<"Name= "<<p.nm<<endl;
}

