//calculate sum of array elements using pointer
#include<stdio.h>
int main()
{
    int size, sum;
    size=sum=0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    int *p=arr;
    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", p);
        sum+=*p;
        p++;
    }
    printf("Total sum of array elements is %d", sum);
    return 0;
}