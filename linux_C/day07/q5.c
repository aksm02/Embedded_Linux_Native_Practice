//to take a string and reverse it
#include<stdio.h>
int main()
{
    char tex[50], rev_tex[50];
    int size=0;
    printf("Enter string: ");
    fgets(tex, 50, stdin);
    for(int i=0; tex[i]!='\0'; i++){
        if(tex[i]=='\n'){
            tex[i]='\0';
            size=i;
            break;
        }
    }
    for(int i=0; tex[i]!='\0';i++){
        rev_tex[size-1-i]=tex[i];
    }
    printf("The reverse of %s is %s.", tex, rev_tex);
    return 0;
}