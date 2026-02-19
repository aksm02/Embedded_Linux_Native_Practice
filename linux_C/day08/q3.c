//function to multiply 2 numbers and print the result
#include<stdio.h>
void mul(int a, int b){
    printf("%d X %d = %d", a, b, a*b);
}
int main()
{
    int a, b;
    printf("Enter the 2 numbers:\n");
    scanf("%d %d", &a, &b);
    mul(a,b);
    return 0;
}