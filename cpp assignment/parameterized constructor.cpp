#include<iostream>
#include<conio.h>
using namespace std;
class add
{
private:
         int a,b,c;

public:
         add(int x,int y)
         {
             a=x;
             b=y;
         }
         void disp()
         {
             c=a+b;
             cout<<"Add= "<<c;
         }
};
int main()
{
    add o(12,5);
    o.disp();
}
