#include<iostream>
#include<conio.h>
using namespace std;
class Std
{
private:
         int avg,rn;
         char nm[10];

public:

         Std()
         {
             cout<<"Enter the nm:\n"<<endl;
             cin>>nm;

             cout<<"Enter the roll no:"<<endl;
             cin>>rn;

             avg=90;
         }
         void disp()
         {
             if(avg>35)
             {
                 cout<<"std has passed"<<endl;
             }
             else if(avg<35)
             {
                 cout<<"std has failed"<<endl;
             }
         }
};
int main()
{
    Std o;
    o.disp();
}

