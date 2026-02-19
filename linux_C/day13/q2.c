//to allocate memeory dynamically for array of int using calloc and fill with user i/p. print
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int s;
    printf("Enter size of array:\t");
    scanf("%d", &s);
    a=calloc(s, sizeof(*a));
    printf("Enter elements:\n");
    for(int i=0; i<s; i++){
        printf("\nElement %d:\t", i+1);
        scanf("%d", a+i);
    }
    printf("The elements are:\n");
    for(int i=0; i<s; i++){
        printf("%d\t", *(a+i));
    }
    return 0;
}