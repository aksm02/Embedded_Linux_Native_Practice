//program to read 2 floating point numbers and print their product
#include<stdio.h>
int main()
{
    float n1, n2;
    printf("Enter 2 integers:\n");
    scanf("%f %f", &n1, &n2);
    printf("%f X %f = %f", n1, n2, n1*n2);
    return 0;
}