#include<iostream>
#include<conio.h>
using namespace std;
class large
{
    private:
             int a,b,c,l;

    public:
              void get()
              {
                cout<<"Enter the No: "<<endl;
                cin>>a>>b>>c;
              }
              void larg()
              {
                  if(a>b&&a>c)
                  {
                      l=a;
                  }
                  else if(b>a&&b>c)
                  {
                      l=b;
                  }
                  else
                  {
                      l=c;
                  }
              }
              void disp()
              {
                  cout<<"Largest "<<l<<endl;
              }
};
int main()
{
    large o;
    o.get();
    o.larg();
    o.disp();
}
