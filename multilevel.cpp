#include<iostream>
using namespace std;

class Base
{
      public:
       int i;
       int j;

       Base()
       {
            cout<<" inside the Base constructor\n";
       }
       ~Base()
       {
            cout<<"inside the Base destructor\n";
       }
       void fun()
       {
            cout<<"inside base fun function\n";
       }
};
class Derived : public Base
{
      public:
       int k;
       int l;
        Derived()
        {
            cout<<"inside the Derived constructor\n";
        }
        ~Derived()
        {
            cout<<"inside the derived destructor\n";
        }
        void Gun()
        {
            cout<<"inside the desrivd Gun function\n";

        }
};
class DerivedX : public Derived
{
      public:
       int A;
       int B;

       DerivedX ()
       {
            cout<<"inside the derivedX constuctor\n";

       }
       ~DerivedX()
       {
            cout<<"inside the derivedsX destructor\n";
       }
       void Sun()
       {
            cout<<"inside the derivedX SUn function\n";
       }
};
int main()
{
   //DerivedX obj;
       DerivedX *ptr = NULL;
       ptr = new DerivedX;

       ptr->fun();
      ptr->Gun();
      ptr->Sun();

      delete ptr;


      return 0;
}