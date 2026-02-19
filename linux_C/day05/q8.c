//first 10 fibbonaci numbers using for loop
#include<stdio.h>
int main()
{
    int a, b, c;
    a=0;
    b=1;
    printf("%d,\t%d,\t", a, b);
    for(int i=1; i<=8; i++){
        c=a+b;
        printf("%d,\t", c);
        a=b;
        b=c;
    }
    return 0;
}