#include<iostream>
#include<conio.h>
using namespace std;
class fibo
{
private:
         int a,b,c,n,i;

public:
          fibo(int x,int y,int z)
          {
              a=x;
              b=y;
              c=z;
              cout<<"Enter the fibo"<<endl;

          }
          void disp()
          {

              for(i=1;i<=n;i++)
              {
                  c=a+b;
                  cout<<"add= "<<c<<endl;
                  a=b;
                  b=c;
              }
          }
};
int main()
{
    int a,b,n;

    cout<<"Enter any value a and b"<<endl;
    cin>>a>>b;

    cout<<"Enter the no"<<endl;
    cin>>n;

    fibo o(a,b,n);
    o.disp();
}
