#include<iostream>

using namespace std;

int main()
{
      int *p  = NULL;
      p = new int ;   //only one element memory gets allocate 

      //use the memory


      //deallocate the memory

      delete p;

      //anothe way 

      int *q =NULL;
      q = new int(5); // memory allocte //()is not array // the five integer memory gets allocate

      //use the memory

      //dellocate the memory 

      delete q ;

      //anothe way allocte the memory 

      int *x = NULL;
      x = new int [5];  //use the memory //memory allocte the five elements of array 

      //deallocte the memory 

      delete []x; // subscript opertor menation must be   // [] means the array 

      //you no mention the subscript opertor then  only first element of array memory gets deallocte
      // [] is not metion // means in marathi likij


      return 0;
}