#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Calculator
{
    public:
           int No1,No2,Res;                      //Public- Data Members of Characteristics

           void Add()                           //Public- Member Function or Behavior
           {
               cout<<"\n inside PUBLIC ADD() function of our Class.."<<endl;
               Res=No1+No2;
           }

           Calculator()                       //Default Constructor
           {
               No1=0;
               No2=0;
               Res=0;

               cout<<"\n inside Default Constructor of Our calculator Class..";

           }

           Calculator(int N1, int N2)       //Default Constructor
           {
               No1=N1;
               No2=N2;
               Res=0;

               cout<<"\n Inside Parameterized Constructor of Our Calculator Class..";
           }

           ~Calculator()
           {
               cout<<"\n Inside Destructor of Our Calculator Class.."<<Res;
           }
};

int main()
{
    Calculator Obj1;                      //Object Created Using Default Constructor

    cout<<"\n Enter 2 Number for Addition= ";
    cin>>Obj1.No1>>Obj1.No2;

    getch();

    Obj1.Add();
    cout<<"\n Addition in Given Objects is = "<<Obj1.Res;

    cout<<"\n Back To Main()..";
    getch();

    Calculator Obj2(15,7);           //Object Created Using Parameterized Constructor

    Obj2.Add();
    cout<<"\n Addition In Given Object Is = "<<Obj2.Res;

    getch();
    return 0;
}
