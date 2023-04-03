#include<iostream>
#include<conio.h>
using namespace std;
class add
{
protected:
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
               cout<<"Add= "<<c<<endl;
           }

};
class sub:public add
{
public:

    void sd()
    {
        c=a-b;
        cout<<"sub= "<<c<<endl;
    }
};
class mlti:public sub
{
public:
        void ml()
        {
            c=a*b;
            cout<<"Multi= "<<c<<endl;
        }
};
int main()
{
    mlti o;
    o.get();
    o.disp();
    o.sd();
    o.ml();
}

