#include<iostream>
#include<conio.h>
using namespace std;

class A1                   //Basic Class
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

class D1:public A1          //Derived Class 1
{
   public:
         int x,y;

         D1()
         {
             cout<<"\n D1:: Constructor..."<<endl;
         }
         ~D1()
         {
             cout<<"\n D1:: Destructor..."<<endl;
         }
         void gun()
         {
             cout<<"\n D1:: gun()..."<<endl;
         }

};

class D2:public D1         //Derived class 2
{
    public:
          int x,y;

          D2()
          {
              cout<<"\n D2:: Constructor..."<<endl;
          }
          ~D2()
          {
              cout<<"\n D2:: Destructor..."<<endl;
          }
          void sun()
          {
              cout<<"\n D2:: sun()..."<<endl;
          }

};
//Main function for the program

int main()
{
    D2 obj;

    cout<<endl<<sizeof(obj)<<endl;

    getch();
    return 0;
}
