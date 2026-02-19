//function to print elements of an array in reverse order, using pointers
#include<stdio.h>
int main()
{
    int size=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    int *p=arr;
    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", p);
        p++;
    }
    p--;
    printf("The elements in reverse order are:\n");
    for(int i=0; i<size; i++){
        printf("%d\t", *p);
        p--;
    }
    return 0;
}