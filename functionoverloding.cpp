#include<iostream>
using namespace std;

class overloding
{
      public:

       int Add(int A,int B)
       {
            cout<<"Inside the two integer :\n";
            cout<<"Addition of two integer\n";
            return A + B;
       }
       float Add(float A,float B)
       {
            cout<<"Addition of two float\n";
            return A + B;
       }
       double Add(double A ,double B)
       {
            cout<<"Addition of double is \n";
            return A + B;
       }

};
int main()
{
       overloding obj;

      int i;
      float f;
      double d;

      i = obj.Add(10,20);
      f = obj.Add(5.7f,6.3f);
      d = obj.Add(25.5,25.5);

      cout<<"Additiuon is : "<<i<<"\n";
      cout<<"Adddition is : "<<f<<"\n";
      cout<<"Addition is :"<<d<<"\n";

      return 0;
}