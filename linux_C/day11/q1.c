//define a union with int, float and char. assign value to each one after another and print them
#include<stdio.h>
typedef union{
  int a;
  float b;
  char c;
}test;
int main()
{
  test t1;
  t1.a=5;
  printf("\n%d\t%f\t%c\n", t1.a, t1.b, t1.c);
  t1.b=3.14;
  printf("\n%d\t%f\t%c\n", t1.a, t1.b, t1.c);
  t1.c='A';
  printf("\n%d\t%f\t%c\n", t1.a, t1.b, t1.c);
  return 0;
}