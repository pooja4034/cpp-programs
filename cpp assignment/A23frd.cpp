#include<iostream>
#include<conio.h>
using namespace std;
class larg
{

             int a,b,c,l;

    public:
             void get();
             friend void large(larg &p);
             void disp();

};
void larg::get()
{
    cout<<"Enter the Number: "<<endl;
    cin>>a>>b>>c;
}
void large(larg &p)
{
                  if(p.a>p.b&&p.a>p.c)
                  {
                      p.l=p.a;
                  }
                  else if(p.b>p.a&&p.b>p.c)
                  {
                      p.l=p.b;
                  }
                  else
                  {
                      p.l=p.c;
                  }
}
void larg::disp()
{
    cout<<"Largest "<<l<<endl;
}
int main()
{
    larg o;
    o.get();
    large(o);
    o.disp();
}
