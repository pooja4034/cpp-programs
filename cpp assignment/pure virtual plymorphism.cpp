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
        virtual void disp()=0;
};
class sub:public add
{
public:
        void disp()
        {
            c=a-b;
            cout<<"sub="<<c<<endl;
        }
};
class multi:public sub
{
public:
        void disp()
        {
            c=a*b;
            cout<<"multi="<<c<<endl;
        }
};
int main()
{
    add *p;
    sub o;
    multi m;
    p=&o;
    p->get();
    p->disp();
    p=&m;
    p->get();
    p->disp();
}
