#include<iostream>
using namespace std;

class Base
{
      public:
      int A,D;

      void fun()
      {
            cout<<"Base  fun\n";
      }
      void gun(int i)
      {
            cout<<"inside the one integer gun \n";
      }
};
class Derived : public Base
{
      public :
      int X,Y;

      void sun()
      {

            cout<<"inside Derived sun\n";
      }
      void fun()
      {
            cout<<"inside Derived fun\n";  ///redefintion of function
      }
};
int main()
{
      Derived dobj;
      dobj.fun();
      dobj.gun(11);
      dobj.sun();

      return 0;
}