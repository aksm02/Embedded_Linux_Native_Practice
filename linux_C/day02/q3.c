#include<stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    i=10;
    f=34.56;
    d=456;
    c='Z';
    printf("Size of %d is %d bytes\n", i, (int)sizeof(i));
    printf("Size of %f is %d bytes\n", f, (int)sizeof(f));
    printf("Size of %lf is %d bytes\n", d, (int)sizeof(d));
    printf("Size of %c is %d bytes", c, (int)sizeof(c));
    return 0;
}