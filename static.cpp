#include<iostream>
using namespace std;

class Mathas
{
      public:
       int i;
       int j;
      
       Mathas()
      {
            int i = 0;
            int j = 0;
      }
      Mathas(int No1 ,int No2)
      {
            i = No1;
            j = No2;
      }
     
      int Addition()
      {
            return i + j;
      }
      int Substraction()
      {
            return i - j;
      }
};
int main()
{
      Mathas mobj1;
      Mathas mobj2(11,25);

      int Ret = 0;

      Ret = mobj1.Addition();
      cout<<"Addition is :"<<Ret<<"\n";

      Ret = mobj2.Addition();
      cout<<"Addition is :"<<Ret<<"\n";
      
      Ret = mobj2.Substraction();
      cout<<"Substraction is :"<<Ret<<"\n";

      return 0;
}