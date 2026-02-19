//sum of digits oof a number using while
#include<stdio.h>
int main()
{
    int n, sum;
    sum=0;
    printf("Enter number: ");
    scanf("%d", &n);
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}