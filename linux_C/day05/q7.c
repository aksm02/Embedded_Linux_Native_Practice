//to display all even numbers between 1 & 50
#include<stdio.h>
int main()
{
    int c=1;
    for(int i=1; i<=50; i++){
        if(i%2==0){
            printf("%d\t", i);
        }
        if(i%10==0){
            printf("\n");
        }
    }
    return 0;
}