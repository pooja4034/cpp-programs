#include<iostream>
#include<conio.h>
using namespace std;
class add
{
    int a,b,c;

public:
       void get()
       {
           a=80;
           b=70;
       }
       void disp()
       {
           c=a+b;
           cout<<"Add= "<<c<<endl;
       }
};
int main()
{
    add o;

    o.get();
    o.disp();
}
