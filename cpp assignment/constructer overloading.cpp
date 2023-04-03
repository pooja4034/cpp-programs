#include<iostream>
#include<conio.h>
using namespace std;
class add
{
private:
         int a,b,c;

public:
         add()//default constructor
         {
             a=10;
             b=20;
         }
         add(add &p)//copy constructor
         {
             a=p.a;
             b=p.b;
         }
         add(int x,int y)//para constructor
         {
             a=x;
             b=y;
         }
         void disp()
         {
             c=a+b;
             cout<<"add: "<<c<<endl;
         }
};
int main()
{
    add o;//default
    add d(5,6);//para
    add c(o);//copy

    c.disp();
    d.disp();



}
