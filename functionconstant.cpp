 #include<iostream>
 using namespace std;

 class Demo
 {
      public:
       int j;
       int i;

      Demo(int x = 10,int y = 20)
      {
            j = x;
            i = y;
      }
      void fun()
      {
            j++;
            i++;
      }
      void gun() //const
      {
            j++;
            i++;
      }
 };
 int main()
 {
      Demo obj1;
      Demo obj2(11);
      Demo obj3(21,23);

      obj3.fun();
      obj3.gun();

      return 0;
 }