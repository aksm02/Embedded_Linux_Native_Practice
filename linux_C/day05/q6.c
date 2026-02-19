//multiplication table using for loop
#include<stdio.h>
int main()
{
    int n, lim;
    printf("Which number's multiplication do you want?: ");
    scanf("%d", &n);
    printf("Uptil what do you want the multiplication table?: ");
    scanf("%d", &lim);
    for(int i=1; i<=lim; i++){
        printf("%d X %d = %d\n", n, i, n*i);
    }
    return 0;
}