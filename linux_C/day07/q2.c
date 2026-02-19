//check if a given string is palindrome
#include<stdio.h>
int main()
{
    char text[50], rev_text[50];
    int size, flag;
    flag=0;
    printf("Enter a string: ");
    fgets(text, 50, stdin);
    for(int i=0; text[i]!='\0'; i++){
        if(text[i]=='\n'){
            text[i]='\0';
            size=i;
            break;
        }
    }
    for(int i=0; i<size; i++){
        rev_text[i]=text[size-1-i];
    }
    for(int i=0; i<size; i++){
        if(text[i]!=rev_text[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%s is not a palindrome.", text);
    }
    else{
        printf("%s is a palindrome.", text);
    }
    return 0;
}