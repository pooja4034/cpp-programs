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
              cout<<"add= "<<c<<endl;
          }
};
class sub
{
protected:

         int x,y,z;

public:
          void get1()
          {
              x=100;
              y=20;
          }
          void disp1()
          {
              z=x-y;
              cout<<"sub= "<<z<<endl;
          }
};
class multi:public add,public sub
{
    int m;

public:

        void ml()
        {
            m=c*z;
            cout<<"multi= "<<m<<endl;
        }
};
int main()
{
    multi o;
    o.get();
    o.disp();
    o.get1();
    o.disp1();
    o.ml();
}
