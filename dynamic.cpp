#include<iostream>
using namespace std;

class Demo
{
      public:
       int i;
       int j;

       Demo()
       {
            cout<<"inside the constructor\n";

       }
       ~Demo()
       {
            cout<<"inside the destructor\n";
       }
       void fun()
       {
            cout<<"inside the funn funnction\n";
       }
};
int main()
{
     // Demo obj //static memory aloction

      Demo *ptr = NULL;
       ptr = new Demo;

       ptr->fun();

      cout<<"value of i "<<ptr->i<<"\n";

      delete ptr;

       return 0;
}