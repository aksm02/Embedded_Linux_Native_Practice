//calculator using switch 
#include<stdio.h>
int main()
{
    int opt;
    float n1, n2;
    printf("Enter the 2 operands in order:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);    
    printf("Choose the operation you want(1-4):\n1. Addition 2. Subtraction 3. Multiplication 4. Division\n");
    scanf("%d", &opt);
    switch(opt){
        case 1:
         printf("%f+%f=%f", n1, n2, n1+n2);
         break;
        case 2:
         printf("%f-%f=%f", n1, n2, n1-n2);
         break;
        case 3:
         printf("%fX%f=%f", n1, n2, n1*n2);
         break;
        case 4:
         printf("%f÷%f", n1, n2, n1/n2);
         break;
        default:
         printf("Invalid input");
         break;
    }
    return 0;   
}