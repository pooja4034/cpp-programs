#include<iostream>
#include<conio.h>
using namespace std;

class Base
{
   public:
          int a,b;

          Base()
          {
              cout<<"\n Base:: Constructor..."<<endl;
          }
          ~Base()
          {
              cout<<"\n Base:: Destructor..."<<endl;
          }

   private:
           int i.j;

   protected:
           int k,j;

};
class Derived:private Base
{
   public:
          int x;

          Derived()
          {
              cout<<"\n Derived:: Constructor..."<<endl;
          }
          ~Derived()
          {
              cout<<"\n Derived:: Destructor..."<<endl;
          }

   private:
           int y;

   protected:
           int z;

};
int main()
{
    Derived dobj;

    //dObj.a=21;
    //dObj.b=51;

    //dObj.i=55;
    //dObj.j=60;

    //dObj.k=100;
    //dObj.l=101;

    dObj.x=5;
    //dObj.y=10;
    //dObj.z=15;

    count<<"Values =>"<<dobj.a<<""<<dobj.b<<""dobj.x<<endl;
    count<<"\n Size of Given Object="<<size(dobj);           //36=> As size of Object= Summation of Sizes of all Non Static characteristics of Base as well as derived
                                                            //  i.e a,b,i,j,k,l=>Inside Base class 6 int Characteristics =6*4=24 Bytes
    return 0;                                               // And x,y,z=> Inside Derived class 3 int Characteristics=3*4=12 Bytes
}
