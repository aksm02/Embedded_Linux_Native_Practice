#include<stdio.h>
#define PI 3.14
int main()
{
    int r;
    printf("Enter radius of circle: ");
    scanf("%d", &r);
    printf("Area of circle=%f\n", PI*r*r);
    return 0;
}