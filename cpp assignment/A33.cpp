#include<iostream>
#include<conio.h>
using namespace std;
class emp
{
private:

    int s;
    char nm[20];

public:

        emp()
        {
            cout<<"Enter the Name: "<<endl;
            cin>>nm;

            cout<<"Enter salary: ";
            cin>>s;
        }
        void disp()
        {
            cout<<"Name: "<<nm<<endl;
            cout<<"Salary: "<<s<<endl;
        }

};
int main()
{
    emp o;
    o.disp();
}
