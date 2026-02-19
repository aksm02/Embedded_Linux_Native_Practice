//program to read marks of 5 subjects and print the average
#include<stdio.h>
int main()
{
    float total, add;
    total=0;
    for(int i=1; i<=5; i++){
        printf("Enter marks for Subject %d: ", i);
        scanf("%f", &add);
        total+=add;
    }
    printf("Average Marks: %f", (float)total/5);
    return 0;
}