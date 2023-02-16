#include<iostream>

using namespace std;

class Demo
{
      public:  //access specifier

      int i;
      int j;
      static int k;
      static int l;
      Demo()  //default constructor
      {
            i = 0;
            j = 0;
      }
      Demo(int a , int b)  //parameterised constructor
      {
            i =  a;
            j = b;
      }
      //vode fun(const Demo *this)
      void fun()  //instance method   //user define behaviour /means function
      //static + no static
      {
            cout<<"inside no static method fun\n";
            cout<<"value of i"<<this->i<<"\n";
            cout<<"value of j"<<this ->j<<"\n";
            cout<<"value of k" <<k<<"\n";
            cout<<"value of l"<<l<<"\n";
      }
      //only static 
     static void gun()  //class method/means function  
      {
            cout <<"inside static method gun\n";   //you can only accept static variable
            cout<<"value of k" <<k<<"\n";  //static method karta"this" pointer nasto ka nasto karn tyacha object 
            cout<<"value of l"<<l<<"\n"; //tayar hot nhi mhnje tyacha address jat nhi 
      }

};
//load time variable //memory gets already allocted
int Demo :: k = 0;   //object creat n kartra you can accept the static data
int Demo :: l = 0;

int main()
{
      cout<<"inside the main";
      cout<<"value of k"<<Demo::k<<"\n";  //0
      cout<<"value of l"<<Demo::l<<"\n";  //0

      Demo::gun();

      Demo obj1(10,11);
      Demo obj2(20,21);
      Demo obj3;

      cout<<"value of i in obj1"<<obj1.i<<"\n"; //10
      cout<<"value of j in obj1"<<obj1.j<<"\n"; //11
      cout<<"value of i in obj2"<<obj2.i<<"\n";//20
      cout<<"value of j in obj2"<<obj2.j<<"\n"; //21

      obj1.fun();  //10,11
      obj2.fun();  //20,21

      return 0;
}