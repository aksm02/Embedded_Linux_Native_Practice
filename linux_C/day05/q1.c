//program if a year is a leap year or not
#include<stdio.h>
void leap_checker(int y){
    if(y%4==0 && y%100==0){
        printf("%d is a leap year.", y);
    }
    else{
        printf("%d is not a leap year", y);
    }
}
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);
    leap_checker(year);
    return 0;
}