#include<iostream>
#include<conio.h>
using namespace std;
class add
{
protected:
         int a,b,c;

public:
          add()
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
class multi:public add
{
public:
        void multiply()
        {
            c=a*b;
            cout<<"multi= "<<c<<endl;
        }
};
int main()
{
   multi o;
   o.disp();
   o.multiply();
}
