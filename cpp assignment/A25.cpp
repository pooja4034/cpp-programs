#include<iostream>
#include<conio.h>
using namespace std;
class swapn
{
private:
         int a,b,tmp;

public:
         void get()
         {
             a=10;
             b=20;
         }
         void disp()
         {
             tmp=a;
             a=b;
             b=tmp;

             cout<<"After Swap= "<<a<<endl<<b;
         }
};
int main()
{
    swapn o;

    o.get();
    o.disp();

}
