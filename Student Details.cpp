#include<iostream>
#include<stdio.h>
namespace std;

class student
{
    private:
           char name[20];
           int roll_no;

    public:
           student();
           -student();

           void read();
           void display();

};

student::student()
{
    cout<<"\n Student::Constructor"<<endl;
}

student::-student()
{
    cout<<"\n Student::destructor"<<endl;
}

void student::read()
{
    cout<<"\n Enter the Name:"<<endl;
    cin>>name;

    cout<<"\n Enter the Roll No:"<<endl;
    cin>>roll_no;
}

void student::dislpay()
{
    cout<<"\n Entered Student Details or Shown Below \n";

    cout<<"\n Student name:"<<name<<endl;

    cout<<"\n Student Roll No:"<<roll_no<<endl;
}

int main()
{
    student obj;

    obj.read();
    obj.display();

    return 0;
}
