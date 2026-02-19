//dynamic allocation integer array(size and elements decided by user). print the array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *arr;
    int n=0;
    printf("Enter No of elements of array: ");
    scanf("%d", &n);
    arr=calloc(n, sizeof(*arr));
    for(int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", arr+i);
    }
    printf("The array elements are:\n");
    for(int i=0; i<n; i++){
        printf("%d\t", *(arr+i));
    }
    return 0;
}