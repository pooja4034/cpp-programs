#include <iostream>
using namespace std;
class fact
{
private:

        int i,f=1,no;

public:

         void get();
         friend void disp(fact &p);
};
void fact::get()
{
    cout<<"Enter the Number: "<<endl;
    cin>>no;
}
void disp(fact &p)
{
      for(p.i=1;p.i<=p.no;p.i++)
  {
      p.f=p.f*p.i;
  }
    cout<<"Factorial of " <<p.no<<" is: "<<p.f<<endl;

}
int main()
{
    fact o;
    o.get();
    disp(o);
}
