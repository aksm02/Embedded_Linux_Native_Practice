//use pointer to access and modify structure memebers
#include<stdio.h>
#include<string.h>
typedef struct{
    char sub[40];
    int  marks;
    char grade;
}marksheet;
void mod_str_mem(marksheet *m);
int main()
{
    marksheet johnny[3];
    for(int i=0; i<3; i++){
        printf("\nEnter results of Johnny's subject %d\n", i+1);
        mod_str_mem(&johnny[i]);
    }
    printf("\nThis is Johnny's Marksheet:\n");
    for(int i=0; i<3; i++){
        printf("\nSubject: %s\tMarks: %d\tGrade: %c\n", johnny[i].sub, johnny[i].marks, johnny[i].grade);
    }
    return 0;
}
void mod_str_mem(marksheet *m){
    printf("\nEnter Subject: ");
    fgets(m->sub, 40, stdin);
    int len=strlen(m->sub);
    if(m->sub[len-1]=='\n'){
        m->sub[len-1]='\0';
    }
    printf("\nEnter Marks: ");
    scanf("%d", &m->marks);
    getchar();
    printf("\nEnter Grade: ");
    scanf("%c", &m->grade);
    getchar();
}