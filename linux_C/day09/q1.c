//use pointer to print value & address of a variable
#include<stdio.h>
int main()
{
    int age;
    int *p;
    p=&age;
    printf("Enter age: ");
    scanf("%d", p);
    printf("The address of age is %p and its value is %d", p, *p);
    return 0;
}