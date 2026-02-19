//function that returns sum of elemnts of array
#include<stdio.h>
int add(int arr[], int size){
    int s=0;
    for(int i=0; i<size; i++){
        s+=arr[i];
    }
    return s;
}
int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The sum of the elements of the array is %d.", add(arr, size));
    return 0;
}