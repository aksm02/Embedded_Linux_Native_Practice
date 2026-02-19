//function to display elemnts of an array
#include<stdio.h>
void dis(int arr[], int s){
    for(int i=0; i<s; i++){
        printf("%d\t", arr[i]);
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
    printf("The array elements are:\n");
    dis(arr, size);
    return 0;
}