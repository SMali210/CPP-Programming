#include<iostream>
using namespace std;

class Base1
{
      public:
       int i;
       int j;

      Base1()
      {
            cout<<"inside the constructor Base \n";
      }
      ~Base1()
      {
            cout<<"inside the destructor\n";
      }
      void Fun()
      {
            cout<<"inside the Base fun function\n";
      }
};
class Base2
{
      public:
       int k;
       int l;

      Base2()
       {
            cout<<"inside the Base2 constructor\n";
       }
       ~Base2()
       {
            cout<<"Inside the Base2 destructor\n";
       }
       void Gun()
       {
            cout<<"inside the gun Base2 function\n";
       }
       
};
class derived : public Base1,public Base2
{
      public:
       int A;
       int B;

       derived()
       {
            cout<<"inside the derived constructor\n";
       }
       ~derived()
       {
            cout<<"inside the derived destructor\n";
       }
       void Sun()
       {
            cout<<"inside the derived sun function\n";
       }
};
int main()
{
     //derived obj;

      //obj.Fun();
      //obj.Gun();
      //obj.Sun();
      derived *ptr = NULL;
      ptr = new derived;

      ptr->Fun();
      ptr->Gun();
      ptr->Sun();

      delete ptr;


      return 0;
}