#include<iostream>
using namespace std;

class Base
{
      public:
       int i;
       int j;

    virtual  void fun(int k)
       {
            cout<<"inside the one integer \n";
       }
       void fun(int l,int s)
       {
            cout<<"inside the two integer \n";
       }
      virtual void gun()
       {
            cout<<"inside the Base gun function \n";

       }
      virtual void mun()
       {
            cout<<"inside the Base function\n ";
       }

};
class Derived : public Base
{
      public:
       int x;
       int y;

       void sun()
       {
            cout<<"inside the derived sun function\n";
       }
       void gun()
       {
            cout<<"inside the derived gun function \n";   ///overriding 
       }
      virtual void mun()
       {
            cout<<"inside the derived mun function \n";
       }
};
int main()
{
     // Base*bp = NULL;
     // Derived dobj;
       
      // bp = &dobj;

      Base*bp = new Derived;

       bp->fun(10);
       bp->fun(11,21);
       bp->gun();
        bp->mun();
      // bp->sun();
      delete bp;

       return 0;
}