//to compare malloc and calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *m, *c;
    m=malloc(5*sizeof(*m));
    c=calloc(5, sizeof(*c));
    for(int i=0; i<5; i++){
        printf("%d\t", *(m+i));
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d\t", *(c+1));
    }
}