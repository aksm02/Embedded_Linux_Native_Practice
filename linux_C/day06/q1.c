//to store 10 integers in an array and print them
#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0; i<10; i++){
        printf("Enter integer %d:", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Elements of the array are:\n");
    for(int i=0; i<10; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}