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
            count<<"Enter name of a/c holder: "<<endl;
            cin>>nm;
            cout<<"Enter account type: "<<endl;
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
                    cout<<"Withdraw amt: "<<endl;
                    cin>>w;
                    b=ib-w;
                    cout<<"Balance: "<<b<<endl;
                    break;
            case 2:
                    cout<<"Deposite: "<<endl;
                    cin>>d;
                    tb=ib+d;
                    cout<<"Total Balance: "<<tb<<endl;
                    break;
            default:
                    cout<<"Wrong choice: "<<endl;
            }
        }
};
void main()
{
    bank o;
    o.get();
    o.disp();
}
