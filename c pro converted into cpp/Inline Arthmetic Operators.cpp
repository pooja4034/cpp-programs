//inline- Arthmetic operator
#include<iostream>
#include<conio.h>
using namespace std;

inline void Add(int N1, int N2)
{
    int Res=0;

    Res= N1+ N2;

    cout<<"\n Addition of\t"<<N1<<" \t&\t"<<N2<<"is\n"<<Res;
}

int main()
{
    int No1=0,No2=0;

    cout<<"\n Enter 2 Number For Addition=";
    cin>>No1>>No2;

    Add(No1,No2);

    getch();
    return 0;
}
