//to find largest smallest element of an array
#include<stdio.h>
int main()
{
    int size, large, small;
    printf("Enter size of array: ");
    scanf("%d", &size);                        //reads how many elements willl be in array i.e., array size
    int arr[size];
    printf("Enter element 1: ");
    scanf("%d", &arr[0]);
    large=small=arr[0];
    for(int i=1; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
        if(arr[i]>=large){                     //to check if we need to update largest number                 
            large=arr[i];
        }
        if(arr[i]<=small){                     //to check if we need to update smallest number
            small=arr[i];
        }
    }
    printf("Largest element = %d\nSmallest element = %d", large, small);
    return 0;
}