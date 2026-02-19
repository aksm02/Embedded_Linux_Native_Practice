//function to add 2 numbers and print the result
#include<stdio.h>
void add(int a, int b){
    printf("%d + %d = %d", a, b, a+b);
}
int main()
{
    int a, b;
    printf("Enter the 2 numbers:\n");
    scanf("%d %d", &a, &b);
    add(a,b);
    return 0;
}