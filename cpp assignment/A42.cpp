#include<iostream>
#include<conio.h>
using namespace std;
class stud
{
protected:
           int rn;

public:
           void get()
           {
               cout<<"Enter the Number: "<<endl;
               cin>>rn;
           }
};
class test:public stud
{
protected:
           int mr,hd,en,t;
           float avg;

public:
          void mrget()
          {
              cout<<"Enter the Marks: "<<endl;
              cin>>mr>>hd>>en;
          }
          void disp1()
          {
              t=mr*hd*en;
              t/3;

          }

};
class result:public test
{
public:
        void disp2()
        {
            cout<<"Roll no:"<<rn<<endl;
            cout<<"Total: "<<t<<endl;
            cout<<"avg: "<<avg<<endl;
        }
};
int main()
{
    result o;
    o.get();
    o.mrget();
    o.disp1();
    o.disp2();
}
