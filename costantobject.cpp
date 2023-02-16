#include<iostream>
using namespace std;

class Demo
{
      public:
       int i;
       int j;

       Demo()
       {
            i = 10;
            j = 20;
       }
       Demo(int a,int b)
       {
            i = a;
            j = b;
       }
};
int main()
{
      Demo obj1;
      Demo obj2(10,20);
      const Demo obj3;
      const Demo obj4(20,30);

      obj1.i++;
     // obj3.i++;
     // obj4.j++;

      return 0;
}