#include<iostream>
using namespace std;

class Demo
{
      public:       //access specifier
       int iNo1;          //
       int iNo2;

       Demo()    //defaualt  constructor
       {
            iNo1 = 0;
            iNo2 = 0;
       }
       Demo(int A,int B)   ///
       {
            iNo1 = A;
            iNo2 = B;
       }
       int Addition()
       {
            return iNo1 + iNo2;
       }
       int  Substraction()
       {
            return iNo1 - iNo2;
       }

};
int main()
{
      Demo obj1;
      Demo obj2(10,20);

      int ret = 0;
      ret =obj2. Substraction();
      cout<<"Substraction is "<<ret<<"\n";
      
      ret = obj1.Addition();
      cout<<"Addition is "<<ret<<"\n";

      return 0;

}