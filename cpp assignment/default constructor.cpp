#include<iostream>
#include<conio.h>
using namespace std;
class add
{
private:
         int a,b,c;

public:
         add()
         {
             a=30;
             b=10;
         }
         void disp()
         {
             c=a+b;
             cout<<"Add= "<<c;
         }
};
int main()
{
    add o;
    o.disp();
}
