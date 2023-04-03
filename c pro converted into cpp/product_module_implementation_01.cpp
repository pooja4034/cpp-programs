#include<iostream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Product
{
     private:
             int P_ID;
             char P_Name[20];
             float P_P_Price;
             float P_S_Price;
             int C_Stock_Value;
             static int P_Cnt;

     public:
             Product();
             Product(char[],float,float,int);


             ~Product();

             void Accept_Product_Details();
             void Display_Single_Product();

};

int Product::P_Cnt=0;

Product::Product()
{
    this->P_ID=++P_Cnt=0;

    strcpy(this->P_Name,"");
    this->P_P_Price=0.0f;
    this->P_S_Price=0.0f;
    this->C_Stock_Value=0;

    cout<<"\n Product with ID"<<this->P_ID<<"Created Successfully by Default Constructor"<<endl;
}

Product::Product(char Name[],float P_Price,float S_Price,int Stock)
{
    this->P_ID=++P_Cnt;

    strcpy(this->P_Name,Name);
    this->P_P_Price=P_Price;
    this->P_S_Price=S_Price;
    this->C_Stock_Value=Stock;

    cout<<"\n Product with ID"<<this->P_ID<<"Created Successfully by Parameterized constructor"<<endl;

}

Product::~Product()
{
    cout<<"\n Product with ID"<<this->P_ID<<"Destroyed Successfully"<<endl;
}

void Product::Accept_Product_Details()
{
    cout<<"\n Enter Details for Product ID=>"<<this->P_ID<<endl;

    cout<<"\n Enter Product Name=";
    cin>>this->P_Name;
    cout<<"\n Enter Product Purchase Price=";
    cin>>this->P_P_Price;
    cout<<"\n Enter Product Sales Price=";
    cin>>this->P_S_Price;
    cout<<"\n Enter Product Current Stock=";
    cin>>this->C_Stock_Value;
}

void Product::Display_Single_Product()
{
    cout<<"\n ====================*******************==================="<<endl;
    cout<<"\n Details of Product ID=>"<<this->P_ID<<endl;

    cout<<"\n Enter Product Name="<<this->P_Name<<endl;
    cout<<"\n Enter Product Purchase Price="<<this->P_P_Price<<endl;
    cout<<"\n Enter Product Sales Price="<<this->P_P_Price<<endl;
    cout<<"\n Enter Product Current Stock="<<this->C_Stock_Vlaue<<endl;
    cout<<"\n ====================*******************==================="<<endl;

}

int main()
{
    Product obj1;
    Product obj2("PEN",5,7,50);

    getch();

    obj1.Display_Single_Product();
    obj2.Display_Single_Product();

    getch();
    return 0;
}

