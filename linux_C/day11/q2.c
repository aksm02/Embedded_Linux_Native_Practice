//structure containing a union and an integer. assign values and display them
#include<stdio.h>
typedef struct{
    int n;
    union {
        float a;
        char c;
    } m;
}test;
int main()
{
    test t1;
    t1.n=7;
    t1.m.a=56.45;
    printf("n=%d and m=%f\n", t1.n, t1.m.a);
    t1.m.c='g';
    printf("n=%d and m=%c", t1.n, t1.m.c);
    return 0;
}