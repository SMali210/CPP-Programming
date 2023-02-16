#include<iostream>
using namespace std;

class Base
{
      public :
      int i;
      private :
      int j;
      protected:
      int k;

      public:
      Base()
      {
            i=10;
            j=20;
            k=30;
      }
      void fun()
      {
            cout<<"value of public i:"<<i<<"\n";
            cout<<"value of private j:"<<j<<"\n";
            cout<<"value of protected k"<<k<<"\n";

      }

};

int main()
{
      Base bobj;
      cout<<"value of publi i"<<bobj.i<<"\n";

      bobj.fun();
      return 0;
}