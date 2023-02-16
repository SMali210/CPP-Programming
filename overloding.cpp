#include<iostream>
using namespace std;

class Demo
{
      public:
            int A;
            int B ;

            Demo(int i = 0, int j = 0)
            {
                  A = i;

                  B = j;
            }
};
Demo operator +(Demo obj1 , Demo obj2)
{
      cout<<"inside the + opreator function \n";
      return Demo(obj1.A+obj2.A,obj1.B+obj2.B);
}
int main()
{
      
      Demo X(20,30);
      Demo Y(11,21);
      Demo Ans(0,0);

      Ans = X + Y;

      return 0;
}