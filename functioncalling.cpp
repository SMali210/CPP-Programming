 #include<iostream>
 using namespace std;

 void fun(int no)  // call by value 
 {
     cout<<"Inside the call by value "<<no<<"\n";   
      no++;
 }
 void gun(int *p)   // call by address
 {
      cout<<"Inside the call by address "<<*p<<"\n";
      (*p)++;    // *p hold the address of j(10) *p++  J(11)
      
 }
 void sun(int &ref)   // call by refernce 
 {
      cout<<"Inside the call by refernce "<<ref<<"\n";
      ref++;    // k++ (11)
 }
 int main()
 {
      int i = 10;
      int j = 10;
      int k = 10;

      fun(i);    //fun(10)
      cout<<i<<"\n";   // i  = 10

      gun(&j);   //gun(200)
      cout<<j<<"\n";     // j = 11

      sun(k);   // sun(k)
      cout<<k<<"\n";       //k = 11

      return 0;
 }