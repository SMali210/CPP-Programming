#include<iostream>
using namespace std;

class Demo
{
      public:
      int X;
      int Y;

      Demo()
      {
            cout<<"Inside the default constructor\n";
      }
      Demo(int i ,int j)
      {
            cout<<"Inside the parametetrised\n";
            X = i;
            Y = j;
      }
      void Fun()
      {
            cout<<"Inside the fun function\n";
      }
};
int main()
{
      Demo *ptr = NULL;
      ptr = new Demo;
      ptr = new Demo(10,20);

      ptr->Fun();

      return 0;
}