#include<iostream>
using namespace std;

class Base
{
      public:
      int i;
      int j;

      Base()
      {
            cout<<"inside the constructor\n";
      }
      ~Base()
      {
            cout<<"Inside the destructor\n";
      }
      void Fun()
      {
            cout<<"inside the base fun function \n";
      }
};
class derived : public Base
{
      public:
      int A;
      int B;

      derived()
      {
            cout<<"Inside the derived constuctor\n";
      }
      ~derived()
      {
            cout<<"inside the derived destructor\n";
      }
      void Gun()
      {
            cout<<"inside the gun function \n";
      }
};
int main()
{
      derived *ptr = NULL;
      ptr = new derived;

      ptr->Fun();
      ptr->Gun();

      delete ptr;

      return 0;
}