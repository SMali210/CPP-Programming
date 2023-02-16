#include<iostream>
using namespace std;

class Base
{
      public:
       int i;
       int j;

      Base()
      {
            cout<<"inside base constructor\n";
      }
      Base(int a,int b)
      {
            i = a;
            j = b;
      }
      void Fun()
      {
            cout<<"inside the Base function\n";
      }
};
class Derived : public Base
{
      public:
       int k;
       int l;
        
        Derived()
        {
            cout<<"inside the constructor\n";
        }
        ~Derived()
        {
            cout<<"inside the Derived Destructor\n";
        }
        Derived(int c ,int d)
        {
            k = c;
            l = d;
        }
        void Gun()
        {
            cout<<"inside the Derived Gun\n";
        }
};
int main()
{
    //  Derived obj;

    Derived *ptr = NULL;
     ptr = new Derived;
     
      
      ptr->Fun();
      ptr->Gun();

      delete ptr;
      return 0;

}