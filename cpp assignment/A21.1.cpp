#include<iostream>
#include<conio.h>
using namespace std;
class abc
{
    int pr,a,n;

public:
        void get()
        {
            cout<<"Enter quantity"<<endl;
            cin>>n;
        }
        void disp()
        {
            pr=a*n;
            cout<<"pr= "<<pr<<endl;
        }
};
int main()
{
    abc o;

    o.get();
    o.disp();
}
