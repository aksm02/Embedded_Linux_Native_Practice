//program to check if a number is positive, negative or zero
#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    if(n>0){
        printf("It is a positive number.");
    }
    else if(n<0){
        printf("It is a negative number.");
    }
    else if(n==0){
        printf("It is zero.");
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}