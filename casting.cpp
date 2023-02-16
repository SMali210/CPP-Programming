#include<iostream>
using namespace std;

class Base
{
      public:
       int i ;
       int j ;

       void fun()
       {
            cout<<"inside the fun function\n";
       }
       void gun()
       {
            cout<<"Inside the gun function \n";
       }
};
class Derived: public Base
{
      public:
       int k;
       int l;

       void sun()
       {
            cout<<"inside the sun function \n";
       }
       void fun()
       {
            cout<<"inside the Derived fun function \n";
       }
};
 int main()
 {
     
            
      Base *bp = NULL;
      Derived *dp = NULL;

      
      Base bobj;
      Derived dobj;

      bp = &bobj;
      dp = &dobj;
      bp = &dobj; //upcasting
      //dp = &bobj //down casting

      bobj.fun();
      dobj.fun();
      bp->fun();
      return 0;
 }