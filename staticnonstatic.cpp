#include<iostream>
using namespace std;

class Demo
{
      public:
      int i;
      int j;
      static int k;
      static int l;

      Demo()
      {
            i = 0;
            j = 0;
      }
      Demo(int A,int B)
      {
            i = A;
            j = B;
      }
      void Fun()
      {
            cout<<"Inside ststic and non Static variable\n";
            cout<<"the value of i is :"<<this->i<<"\n";
            cout <<"the value of j is :"<<this->j<<"\n";
            cout<<"The value of k :"<<k<<"\n";
            cout<<"the value of l :"<<l<<"\n";
      }
      static void Gun()
      {
            cout<<"Inside only static variable\n";
            cout<<"inside the value of k :"<<k<<"\n";
            cout<<"Inside the value of l :"<<l<<"\n";
      }
};
int Demo::k = 4;
int Demo::l = 5;

int main()
{
      cout<<"inside the value of k is :"<<Demo::k<<"\n";
      cout<<"Inside the value of l is :"<<Demo::l<<"\n";

      Demo obj1;
      Demo obj2(10,20);
      Demo obj3;

      cout<<"Inside the value of i is :"<<obj2.i<<"\n";
      cout<<"Inside the value of j is :"<<obj2.j<<"\n";
      cout<<"inside the the value i in obj1 :"<<obj1.i<<"\n";
      cout<<"inside the value of j in obj1 :"<<obj1.j<<"\n";

      obj1.Fun();
      obj2.Fun();

      Demo::Gun();

      return 0;
}