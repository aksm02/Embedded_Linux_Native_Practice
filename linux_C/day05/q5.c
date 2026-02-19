// factorial of a number using while loop
#include<stdio.h>
int main()
{
    int n, fact;
    fact=1;
    printf("Enter number: ");
    scanf("%d", &n);
    int num=n;
    while(n!=1){
        fact*=n;
        n--;
    }
    printf("%d!=%d", num, fact);
    return 0;
}