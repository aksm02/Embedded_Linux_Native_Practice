//using pointer to print the elements of an array
#include<stdio.h>
void dis(int arr[], int s){
    int *p=arr;
    for(int i=0; i<s; i++){
        printf("%d\t", *p);
        p++;
    }
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
    dis(arr, size);
    return 0;
}