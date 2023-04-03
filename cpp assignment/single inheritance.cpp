#include<iostream>
#include<conio.h>
using namespace std;
class add
{
protected:
           int a,b,c;

public:
           void get()
           {
               a=10;
               b=20;
           }
           void disp()
           {
               c=a+b;
               cout<<"Add= "<<c<<endl;
           }

};
class sub:public add
{
public:

    void sd()
    {
        c=a-b;
        cout<<"sub= "<<sd<<endl;
    }
};
int main()
{
    sub o;
    o.get();
    o.disp();
    o.sd();
}
