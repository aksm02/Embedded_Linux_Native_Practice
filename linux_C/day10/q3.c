//pass structure to function and display content
#include<stdio.h>
typedef struct{
    char name[50];
    int sal;
    char sub[30];
}teacher;
void dis_tea(teacher *t);
int main()
{
    teacher t1={"James", 40000, "Math"};
    teacher t2={"Tintin", 30000, "History"};
    teacher t3={"Tonks", 38000, "Biology"};
    dis_tea(&t1);
    dis_tea(&t2);
    dis_tea(&t3);
    return 0;
}
void dis_tea(teacher *t){
    printf("Name: %s\tSalary: %d\t Subject: %s\n", (*t).name, t->sal, t->sub);
}