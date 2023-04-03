#include<iostream>
#include<conio.h>
using namespace std;
class bank
{
private:
         long int an,ib,w,b,d,td,ch;
         char nm[20],att[12];

public:
          void get()
          {
              cout<<"Enter account no: "<<endl;
              cin>>an;
              cout<<"Enter name of a/c holder"<<endl;
              cin>>nm;
              cout<<"Enter account type: "<<endl;
              cin>>att;
              cout<<"Enter initial balence in a/c"<<endl;
              cin>>ib;
          }
          void disp()
          {
              cout<<"Enter your choise: "<<endl;
              cout<<"1.Withdraw\n2.Deposite"<<endl;
              cin>>ch;

              switch(ch)
              {
              case 1:
                cout<<"Withdraw amt"<<endl;
                cin>>w;
                b=ib-w;
                cout<<"Balence: "<<b<<endl;
                break;

              case 2:
                 cout<<"Dposite"<<endl;
                 cin>>d;
                 td=ib+d;
                 cout<<"Total Ballence: "<<endl;
                 break;
              default:
                       cout<<"Wrong Chiose"<<endl;

              }

          }
};
int main()
{
    bank o;
    o.get();
    o.disp();
}
