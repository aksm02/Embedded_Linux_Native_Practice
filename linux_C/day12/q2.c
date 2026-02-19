//use malloc to allocate 5 float values. initialize and display
#include<stdio.h>
#include<stdlib.h>
int main()
{
    float* f;
    f=malloc(5*sizeof(*f)); //allocated memory of 5 floats
    printf("Enter 5 floating point numbers:\n");
    for(int i=0; i<5; i++){
        scanf("%f", f+i);
    }
    printf("The elements are:\n");
    for(int i=0; i<5; i++){
        printf("%f\t", *(f+i));
    }
    return 0;
}