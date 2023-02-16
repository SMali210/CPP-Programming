#include<iostream>
using namespace std;

class Base
{
      public:
       int A;
       int B;

       void Fun(int i)  //function definction
       {
            cout<<"inside one integer from fun function\n";
       }
       void Fun(int j,int k)    //overloding fun function
       {
            cout<<"inside two integer from fun function\n";
       }
       void gun()
       {
            cout<<"inside the gun function \n";
       }
};
class Derived :public Base
{
      public:
       int x;
       int y;

       void sun()
       {
            cout<<"inside the sun function\n";
       }
       void gun()    //function redefinaction
       {
            cout<<"inside the gun derived function\n";
       }
};
int main()
{
      Derived dobj;

      dobj.Fun(11);
      dobj.Fun(10,11);
      dobj.gun();  // jyacah object aahe tychc function call hot
      dobj.Base::gun();
      dobj.sun();

      return 0;

}