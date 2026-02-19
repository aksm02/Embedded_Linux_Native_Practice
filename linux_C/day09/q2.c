//program to swap 2 numbers using pointers
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 integers:\n");
    int *p, *q;
    p=&a;
    q=&b;
    scanf("%d%d", p, q);
    printf("Original values: a=%d and b=%d\n", *p, *q);
    int temp=0;
    temp=*p;
    *p=*q;
    *q=temp;
    printf("Swapped values: a=%d and b=%d", *p, *q);
    return 0;
}