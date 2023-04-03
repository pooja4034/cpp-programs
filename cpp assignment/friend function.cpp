#include<iostream>
#include<conio.h>
using namespace std;
class add
{
private:
        int a,b,c;

public:
        void get(); //member fun

friend void disp(add &p); //nonmember function
};
void add:: get()
{
    a=10;
    b=20;
}
void disp(add &p) //frd function
{
    p.c=p.a+p.b;
    cout<<"add= "<<p.c;
}
int main()
{
    add o;
    o.get();
    disp(o);
}
