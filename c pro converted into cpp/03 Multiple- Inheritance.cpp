#include<iostream>
#include<conio.h>
using namespace std;

class A1             //Basic Class 1
{
    public:
           int a,b;

           A1()
           {
               cout<<"\n A1:: Constructor..."<<endl;
           }
           ~A1()
           {
               cout<<"\n A1:: Destructor..."<<endl;
           }
           void fun()
           {
               cout<<"\n A1:: fun()..."<<endl;
           }

};
class A2
{
    public:
            int x,y;

            A2()
            {
                cout<<"\n A2:: constructor..."<<endl;
            }
            ~A2()
            {
                cout<<"\n A2:: Destructor..."<<endl;
            }
            void gun()
            {
                cout<<"\n A2::gun()..."<<endl;
            }

};
class D1:public A1,A2        //Derived Class2
{
    public:
           int l,m;

           D1()
           {
               cout<<"\n D1:: Constructor..."<<endl;
           }
           ~D1()
           {
               cout<<"\n D1:: Destructor..."<<endl;
           }
           void sun()
           {
               cout<<"\n D1:: sun()..."<<endl;
           }

};
//Main function for the program

int main()
{
    D1 obj;

    cout<<endl<<sizeof(obj)<<endl;

    getch();
    return 0;
}
