//program to find largest of 3 numbers
#include<stdio.h>
int main()
{
    float n1, n2, n3, large;
    large=0;
    printf("Enter 3 numbers:\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    if(n1>=n2 && n2>=n3){
        large=n1;
    }
    else if(n2>=n1 && n2>=n3){
        large=n2;
    }
    else{
        large=n3;
    }
    printf("Largest of the 3 numbers is %f", large);
    return 0;
}