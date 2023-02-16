#include<iostream>
using namespace std;
//call by value
void Fun(int no)
{
      cout<<"inside call by value "<<no<<"\n";
      no++;
}
//call by address
void Gun(int *p)
{
      cout<<"inside call by value "<<*p<<"\n";
      (*p)++;
}
//call by reference
void Sun(int &ref)
{
      cout<<"inside call by value "<<ref<<"\n";
      ref++;
}

int main()
{
      int i = 10;
      int j = 10;
      int k = 10;

      Fun(i);
      cout<<i<<"\n";
      Gun(&j);
      cout<<j<<"\n";
      Sun(k);
      cout<<k<<"\n";

      return 0;
}