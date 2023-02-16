#include<iostream>
using namespace std;

class Demo
{
      public:
       int i;
      private:
       int j;
      protected:
       int k;

       public:
        
        Demo()
        {
            i = 10;
            j = 20;
            k = 30;
        }
        void fun()
        {
            cout<<"value of public i from "<<i<<"\n";
            cout<<"value of private j from "<<j<<"\n";
           cout<<"value of protected kfrom "<<k<<"\n";

        }

      
};
int main()
{
       Demo dobj;

      cout<<"val;ue of public i "<<dobj.i<<"\n";
      //cout<<"val;ue of private j "<<dobj.j<<"\n";
     // cout<<"val;ue of protected k "<<dobj.k<<"\n";

      dobj.fun();



      return 0;
}