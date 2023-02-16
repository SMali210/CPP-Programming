#include<iostream>
using namespace std;

class Demo
{
      public:
       int i;
       int j;

       
       Demo(int x = 10, int y = 20)
       {
            i = x;
            j = y;
            
       }
      void Fun() const
      {
            i++;
            j++;
      }
      void Gun()
      {
            
            cout<<"inside the gun function \n";
      }
};
int main()
{
      Demo obj1;
      Demo obj2(40);
      Demo obj3(10,30);
      
      obj3.Fun();
      obj3.Gun();

      return 0;
}