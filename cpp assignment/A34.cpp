#include<iostream>
#include<stdio.h>
using namespace std;
class demo
{
    int a,b,c;

public:
        demo()
        {
            cout<<"Enter the two Numbers: "<<endl;
            cin>>a>>b;
        }
        void sum()
        {
            c=a+b;
            cout<<"Sum: "<<c<<endl;
        }
        void sub()
        {
            c=a-b;
            cout<<"Sub: "<<c<<endl;
        }
        void mul()
        {
            c=a*b;
            cout<<"Mul: "<<c<<endl;
        }
        void div()
        {
            c=a/b;
            cout<<"Div: "<<c<<endl;
        }
};
int main()
{
    demo o;
    o.sum();
    o.sub();
    o.mul();
    o.div();
}
