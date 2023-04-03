#include<iostream>
#include<conio.h>
using namespace std;
class add
{
private:
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
            cout<<"add="<<c;
        }
};
int main()
{
    add o;
    o.get();
    o.disp();

}
