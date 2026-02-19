//to find length of a string w/o using strlen
#include<stdio.h>
int main()
{
    char text[50];
    int count=0;
    printf("Enter string(max 50 char): ");
    fgets(text, 50, stdin);
    for(int i=0; i<50; i++){
        if(text[i]=='\0' || text[i]=='\n'){
            break;
        }
        else{
            count++;
        }
    }
    printf("The string %s is %d characters long", text, count);
    return 0;
}