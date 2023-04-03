#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
protected:
         long int an,ib,w,d,b,td;
           char anm[20],att[20];

public:
            void get()
          {
              cout<<"Enter account no: "<<endl;
              cin>>an;
              cout<<"Enter name of a/c holder"<<endl;
              cin>>anm;
              cout<<"Enter account type: "<<endl;
              cin>>att;
              cout<<"Enter initial balence in a/c"<<endl;
              cin>>ib;
          }
};
class diposite:public bank
{
public:
        void dpo()
        {
            cout<<"Diposite"<<endl;
            cin>>d;
        }
        void disp()
        {
            td=ib+d;
            cout<<"Total Ballence: "<<endl;
        }
};
class withdraw:public diposite
{
public:
        void with()
        {
            cout<<"Withdraw amt"<<endl;
            cin>>w;
        }
        void disp1()
        {
             b=ib-w;
            cout<<"Balence: "<<b<<endl;
        }
};
int main()
{
    withdraw o;
    diposite p;
    o.get();
    o.with();
    o.disp1();
    p.dpo();
    p.disp();


}

