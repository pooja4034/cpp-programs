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
            a=12;
            b=13;
        }
        virtual void disp()
        {
            c=a+b;
            cout<<"add= "<<c<<endl;
        }
};
class sub:public add
{
public:
        void disp()
        {
            c=a-b;
            cout<<"sub= "<<c<<endl;
        }
};
int main()
{
    add o,*p;
    sub s;
    p=&o;
    p->get();
    p->disp();
    p=&s;
    p->get();
    p->disp();
}

