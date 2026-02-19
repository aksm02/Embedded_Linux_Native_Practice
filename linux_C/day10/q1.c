//declare a structure, declaring a structure variable, then reading and displaying its values
#include<stdio.h>
typedef struct{
    int rno;
    char cl;
    char name[50];
}student;
int main()
{
    student s1;
    printf("Enter data of the student:\n");
    printf("Roll number:\t");
    scanf("%d", &s1.rno);
    printf("\nClass:\t");
    scanf(" %c", &s1.cl);
    printf("\nName:\t");
    getchar();
    fgets(s1.name, 50, stdin);
    printf("\nStudent data:\nRoll Number:\t%d\t\tClass:\t%c\t\tName:\t%s", s1.rno, s1.cl, s1.name);
    return 0;
}