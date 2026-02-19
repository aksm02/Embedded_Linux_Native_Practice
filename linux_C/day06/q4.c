//to sort an array in ascending order
#include<stdio.h>
void swap(float *a, float *b){
    float s;
    s=*a;
    *a=*b;
    *b=s;
}
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    float arr[size];
    for(int i=0; i<size; i++){
        printf("Enter element %d: ", i+1);
        scanf("%f", &arr[i]);
    }
    for(int i=0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]>=arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("The array in ascending order is:\n");
    for(int i=0; i<size; i++){
        printf("%f\t", arr[i]);
    }
    return 0;
}