#include <iostream>
using namespace std;
int main()
{
   int i,fact=1,no;

  cout<<"Enter any Number: ";
  cin>>no;

  for(i=1;i<=no;i++)
  {
      fact=fact*i;
  }
  cout<<"Factorial of " <<no<<" is: "<<fact<<endl;

  return 0;
}
