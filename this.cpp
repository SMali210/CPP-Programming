#include<iostream>

using namespace std;

class Demo
{
      public:

      int i;
      float f;
      double d;

      void fun(int A)   //void fun(Demo *this,int A)
      {
            cout<<"inside the fun\n";
            cout<<this->i<<"\n";
      }

      void gun(int A,int B)  //void gun(Dmo *this,intA,int B)
      {
            cout<<"inside the gun\n";   
      }

};

int main()

{
      Demo obj1;
      Demo obj2;

      obj1.i = 101;
      obj2.i = 201;

      obj1.fun(11); //fun(&obj1,11);fun(101,11)

      

      obj2.fun(11);   //fun (&obj2,11);gun(200,11);
            
      

      return 0;

}
