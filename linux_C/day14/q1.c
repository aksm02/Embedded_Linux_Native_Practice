// to create a file named data.txt and write the numbers 1 to 10 into it
#include<stdio.h>
int main()
{
  FILE *f;
  f=fopen("data.txt", "w");
  for(int i=1; i<11; i++){
    fprintf(f, "%d\n", i);
  }
  return 0;
}