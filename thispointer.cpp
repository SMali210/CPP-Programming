#include<iostream>
using namespace std;

class Demo
{
      public:
      int i;
      float f;
      double d;

      void fun(int A)
      {
            cout<<"inside the fun\n";
            cout<<this->i<<"\n";
      }
      void gun(int A,int B)
      {
            cout<<"Inside the gun\n";
            cout<<this->i<<"\n";
            cout<<this->i<<"\n";

      }
};
int main()
{

      Demo obj1;
      Demo obj2;

      obj1.i = 101;
      obj2.i = 102;

      obj1.fun(11);

      obj2.fun(11);

      obj1.i =  201;
      obj2.i = 202;

      obj1.gun(20,30);
      obj2.gun(20,30);

      return 0;
}