#include<iostream>
#include<conio.h>
using namespace std;
class fb
{

private:

    int a,b,c,n,i;

public:
        fb()
        {
            a=1;
            b=2;
            n=5;
        }
        fb(fb &p)
        {
            a=p.a;
            b=p.b;
            n=p.n;
        }
        fb(int x,int y,int z)
        {
            a=x;
            b=y;
            n=z;
        }
        void disp()
        {
            cout<<"Fibonacci series"<<endl;
            for(i=1;i<=n;i++)
            {
                c=a+b;
                cout<<c<<endl;
                a=b;
                b=c;
            }
        }
};
int main()
{
    fb n;
    fb o(1,2,5);
    fb m(o);
    n.disp();
    o.disp();
    m.disp();
}
