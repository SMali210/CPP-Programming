#include<iostream>
using namespace std;

class Base 
{
      public:
      int A;
      int B;

      private:
      int i;
      int j;

      protected:
      int X;
      int Y;

      public:
      Base()
      {
            int A = 10;
            int i = 20;
            int X = 30;
      }
      void Fun()
      {
            cout<<"value of public A from fun"<<A<<"\n";
            cout<<"value of private i From fun "<<i<<"\n";
            cout<<"value of protected X from fun "<<X<<"\n";
      }
};
int main()
{
      Base bobj;
      
      cout<<"value of public A from"<<bobj.A<<"\n";
     // cout<<"value of private i From "<<bobj.i<<"\n";
     //cout<<"value of protected X from "<<bobj.X<<"\n";

     bobj.Fun();

     return 0;
}