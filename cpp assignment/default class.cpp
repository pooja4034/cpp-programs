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
           a=20;
           b=30;
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
    o.get();
    o.disp();
}
