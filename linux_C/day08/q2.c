//even odd checker function
#include<stdio.h>
void eo_check(int n){
    if(n%2==0){
        printf("%d is an even number.", n);
    }
    else{
        printf("%d is an odd number.", n);
    }
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    eo_check(n);
    return 0;
}