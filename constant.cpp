#include<iostream>
using namespace std;

class Demo
{
      public:
      int i;
      const int j;

      Demo(int A = 10,int B = 20):j(B)
      {
            i = A;
      }
      void fun() 
      {
            int a = 20;
            const int b = 30;
            a++;
           // b++;
            i++;
            //j++;
      }
      void sun() const
      {
            int a = 20;
            const int b = 30;
           a++;
          // b++;
          // i++;
           //j++;

      }
};
int main()
{
      Demo obj1(10,5);
     const Demo obj2(20,30);

     obj1.fun();
     obj1.sun();

    // obj2.fun();
     obj2.sun();
    return 0;
}