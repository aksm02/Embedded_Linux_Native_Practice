//to reverse an array of integers
#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The array in correct order is:\n");
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nThe array in reverse order is:\n");
    for(int i=size-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }
}