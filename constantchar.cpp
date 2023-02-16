#include<iostream>
using namespace std;

class Demo
{
      public:
       int i;
       int j;
     const int k;
     const int l;

      Demo():k(11),l(21)
      {
            i = 10;
            j = 20;
      }
     Demo(int A,int B,int C,int D):k(C),l(D)
     {
        i = A;
        j = B;
     }
};
int main()
{
      Demo obj1;
      Demo obj2(10,20,30,40);

    //  obj1.k++;
    //  obj2.l++;

      obj1.i++;
      obj2.j++;

      return 0;
}