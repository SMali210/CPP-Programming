#include<stdio.h>

struct student
{
      int marks;
      int age;
      int division;
};
int main()
{
      struct student obj;
      struct student *ptr = NULL;
      ptr = &obj;

      ptr->marks = 85;
      ptr->age = 21;
      ptr->division = 'A';

      printf("value of marks is :%d\n",ptr->marks);

      return 0;
}