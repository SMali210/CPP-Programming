#include<iostream>
#include<stdlib.h>
using namespace std;
//use the malloc function in cpp  using the clss
class Demo
{
      public:
       int  X;
       int Y;

       Demo()
       {
            cout<<"Inside the constuctor\n";
       }
       ~Demo()
       {
            cout<<"Inside the Destructor\n";
       }
       void fun()
       {
            cout<<"Inside fun function\n";

       }
};
int main()
{
      Demo *ptr =NULL;

      ptr = (Demo*)malloc(sizeof(Demo));

      ptr->fun();

      cout<<"inside the value "<<ptr->X<<"\n";

      free(ptr);
//constructor and destructor are not call 
      return 0;
}