#include<iostream>
using namespace std;

class Base
{
      public:
      int A,B;

      void Fun()              //defintion of fun function
      {
            cout<<" inside the Base Fun\n";
      }
      void Sun(int A)
      {
            cout<<"inside the integer Sun\n";   //defintion
      }
      void Sun(int i,int j)      //overloading function 
      {
            cout<<"inside the two integer\n";
      }
};
class Derived :public Base
{
      public:
      int j;
      int k;

      void Gun()     //defintion of Gun function
      {
            cout<<"inside the gun function\n";
      
      }
      void Fun()    //redefition of Fun Function
      {
            cout<<"inside the Fun from Derived\n";
      }
};
int main()
{

      Derived dobj;    //create object 
      dobj.Fun();    //call  /// atomatically Derived fun function call
      dobj.Sun(10);     //call
      dobj.Sun(10,20);   
      dobj.Gun();
      dobj.Base::Fun();  //function call Base funstion
      return 0;
}

