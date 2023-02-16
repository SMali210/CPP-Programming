#include<iostream>
using namespace std;

class Base1
{
      public:
      int i;
      int j;

      Base1()
      {
            cout<<"Inside the Base1 \n";
      }
      ~Base1()
      {
            cout<<"inside the destructor\n";
      }
      void Fun()
      {
            cout<<"Inside the base1 fun functionh\n";
      }

};
class Base2
{
      public:
      int x;
      int y;

      Base2()
      {
            cout<<"inside the Base2 constructor \n";
      }
      ~Base2()
      {
            cout<<"inside the Base2 destructor \n";
      }
      void Gun()
      {
            cout<<"Inside the Base2 function\n";
      }
};
class derived : public Base1 ,public Base2
{
      public:
      int k;
      int l;

      derived()
      {
            cout<<"Inside the derived constructor\n";
      }
      ~derived()
      {
            cout<<"inside the derived destructor\n";
      }
      void Sun()
      {
            cout<<"Inside the derived sun function\n";
      }
};
int main()
{
      derived *ptr = NULL;
      ptr = new derived;

      ptr->Fun();
      ptr->Gun();
      ptr->Sun();

      delete ptr;

      return 0;
}
















































































































































































































































































































































































































































