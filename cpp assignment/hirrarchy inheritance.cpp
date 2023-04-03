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
class sub:public add
{
public:

          void disp1()
          {
              c=a-b;
              cout<<"sub= "<<c<<endl;
          }
};
class multi:public add
{

public:

        void ml()
        {
            c=a*b;
            cout<<"multi= "<<c<<endl;
        }
};
int main()
{
    multi s;
    sub o;
    o.get();
    o.disp();
    o.disp1();
    s.get();
    s.ml();

}
