#include<iostream>
#include<conio.h>
using namespace std;
class Swap
{
private:
        int a,b,tmp;

public:
        void get();

        friend void disp(Swap &p);
};
void Swap::get()
{
    a=40;
    b=50;
}
void disp(Swap &p)
{
    p.tmp=p.a;
    p.a=p.b;
    p.b=p.tmp;

    cout<<"After Swap= "<<p.a<<endl<<p.b;
}
int main()
{
    Swap o;
    o.get();
    disp(o);
}

