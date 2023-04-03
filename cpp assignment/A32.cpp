#include<iostream>
#include<conio.h>
using namespace std;
class fact
{
    int n,i,f;

public:
        fact()
        {
            cout<<"Enter the no: "<<endl;
            cin>>n;
        }
        void disp()
        {
            f=1;
            for(i=1;i<=n;i++)
            {
                f=f*i;
            }
            cout<<"Fact: "<<f<<endl;
        }
};
int main()
{
    fact o;
    o.disp();
}
