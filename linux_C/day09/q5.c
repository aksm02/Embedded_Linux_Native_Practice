//function to swap 2 numbers using pointers
#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x, y;
    printf("Enter 2 integers:\n");
    scanf("%d %d", &x, &y);
    printf("The origianl values are:\nx=%d and y=%d.", x, y);
    swap(&x, &y);
    printf("The swapped values are:\nx=%d and y=%d.", x, y);
    return 0;
}