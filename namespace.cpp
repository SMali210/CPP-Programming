#include<iostream>
//using namespace std;

namespace Marvellous
{
      class Demo
      {
            public:
             int i,j;
             void fun()
             {
                std::cout<<"Inside the marvellous \n";
             }

      };
      class Hello
      {
            public:
             int k,l;
             void sun()
             {
                 std::cout<<"Inside the marvellous \n";
             }
      };
}
namespace Infosystem
{
      class Demo
      {
            public:
             int i,j;
             void fun()
             {
                 std:: cout<<"Inside the Infosystem\n";
             }
             void gun()
             {
                 std:: cout<<"Inside the Infosystem\n";
             }
      };

}
int main()
{
      Marvellous::Demo obj1;  /// full qualifired name ::
      Infosystem::Demo obj2;
      Marvellous::Hello hobj;
       
       obj2.fun();
       obj2.gun();
       obj1.fun();
       hobj.sun();

      return 0;
}