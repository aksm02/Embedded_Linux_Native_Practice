//function to return the reverse of a number
#include<stdio.h>
int rev(int n){
    int r=0;
    while(n!=0){
        r=(r*10)+(n%10);
        n/=10;
    }
    return r;
}
int main()
{
    int num, numc;    
    printf("Enter number: ");
    scanf("%d", &num);  
    printf("The reverse of %d is %d.", num, rev(num));
    return 0;
}