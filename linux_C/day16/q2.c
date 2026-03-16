#include<stdio.h>
#define SQUARE(x) x*x 
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Square of %d is %d\n", a, SQUARE(a));
    return 0;
}