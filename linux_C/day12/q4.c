//to create a dynamic array of 3 elements. resize it to 6 elements. initalize and display both
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *n=calloc(3, sizeof(*n));
    printf("The original dynamic array was:\n");
    for(int i=0; i<3; i++){
        *(n+i)=i;
        printf("%d\t", *(n+i));
    }
    printf("\nThe new dynamic array is:\n");
    n=realloc(n, 6*sizeof(*n));
    for(int i=0; i<6; i++){
        *(n+i)=i;
        printf("%d\t", *(n+i));
    }
    return 0;
}