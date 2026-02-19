//to input a string and print each character on a new line
#include<stdio.h>
int main()
{
    char text[50];
    printf("Enter string: ");
    fgets(text, 50, stdin);
    for(int i=0; text[i]!='\0'; i++){
        if(text[i]=='\n'){
            text[i]='\0';
            break;
        }
    }
    for(int i=0; text[i]!='\0'; i++){
        if(text[i]==' '){
            printf("\n");
            continue;
        }
        printf("%c\n", text[i]);
    }
    return 0;
}