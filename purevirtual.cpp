#include<iostream>
using namespace stad;

class circle
{
      public:
       float PI;
       float Radius;

       circle()
       {
            PI = 3.14;
            Radius = 0.0;
       }
       circle(float A,float B)
       {
            PI = A;
            Radius = B;
       }
       void Display()
       {
            cout<<"value of Radius is :"<<Radius<<"\n";
       }
       virtual float Area() = 0;
       virtual float circumfarance() = 0;



};
class Marvellous : public circle
{
      public:
         Marvellous() :circle()
         {

         }
         Marvellous(float X,float Y) :circle(X,Y)
         {

         }
        float Area()   //concrete method
        {
            float Ans = PI*Radius*Radius;
            return Ans; 
        }
        float circumfarance()   //concrete method
        {
            float Ans = 0.0;
            Ans = 2*PI*Radius;
            return Ans;
        }
};
int main()
{

      Marvellous mobj1;
      Marvellous mobj2(3.14,10.89);

      float fret = 0.0;

      fret = mobj2.Area();
      cout<<"Area is :"<<fret<<"\n";

      fret = mobj2.circumfarance();
      cout<<"circumfarnce is "<<fret<<"\n";

      return 0;
      
}