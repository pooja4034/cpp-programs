using namespace std;
#include<iostream>
#include<conio.h>

class Constructor_Demo
{
   private:
      int x,y;

      void Sun();

   protected:
     int a,b;

     void Gun();

   public:
    int i,j;

    void Fun();

    Constructor_Demo()
    {
        i=j=x=y=1580;
        a=b=2020;

        cout<<"\n Inside Default Constructor of Our Class...";
        //Inside Constructor We Can Call Any Member Function Without Access Specifiers Limitations Bcz Constructor is Insider Of Class Can And As We Known Insider Can Access Any Characteristics/Behaviors Of Class

        Fun();
        Sun();
        Gun();

        cout<<"\n characteristics Values Inside Constructor=>\ni="<<i << endl <<"j="<<j<< endl<<"x="<<x <<endl <<"y="<<y<< endl << "a="<<a<<endl <<"b="<<b;
        getch();


    }
    ~Constructor_Demo()                //Destructor
    {
        cout<<"\n Inside Destructor Of Our Class.....";
    }

};

//Main()Function Definition

int main()
{
    Constructor_Demo Obj1;            //Object Created Using Default constructor

    cout<<"\n INSIDE main()!!!!!!!";

    Obj1.Fun();                      //Public Member Function Accessible Outside Class

    //Obj.Gun();                    //Protected Member Function Can't Be Accessible Outside Class

    //Obj.Sun();

    cout<<"\nValues of Public Characteristics Of Obj1=>\nI="<<Obj1.i<<"j="<<Obj1.j;              //public Characteristics- Accessible Outside Class

    //cout<<"\n values Of Privet Characteristics Of Obj1=> \nX="<<Obj1.x<<"Y="<<Obj1.y;        //Private Characteristics- Can't be Accessible Outside Class

    //cout<<"\nValue Of Protected Characteristics Of Obj1=>\nA="<<Obj1.a<<"B="<<Obj1.b;       //Protected Characteristics- Can't be Accessible Outside Class

    getch();
    return 0;
}

//Member Function Definition outside Class

void Constructor_Demo::Sun()
{
    cout<<"\n Inside Private Sun() function of our Class....";
}

void Constructor_Demo::Gun()
{
    cout<<"\n Inside Protected Gun()function of our Class....";
}

void Constructor_Demo::Fun()
{
    cout<<"\n Inside Public fun() function of our Class...";
}
