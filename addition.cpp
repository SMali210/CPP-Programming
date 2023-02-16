#include<iostream>
using namespace std;

class Demo
{
      public:
       int i;
       int j;
      
      Demo()
      {
            int i = 0;
            int j = 0;
            cout<<"Inside the default constructor\n";
      }
      Demo(int A ,int B)
      {
            i = A;
            j = B;
            cout<<"Inside the parameterised constructor\n";
      }
      int Addition()
      {
            return i + j;
      }
      int Substraction()
      {
            return i - j;
      }
};
int main()
{
      Demo obj1(0,0);
      Demo obj2(10,20);

      int Ret = 0;

      Ret = obj1.Addition();
      cout<<"Addition is :"<<Ret<<"\n";

      Ret = obj2.Addition();
      cout<<"Addition is "<<Ret<<"\n";

      return 0;
}