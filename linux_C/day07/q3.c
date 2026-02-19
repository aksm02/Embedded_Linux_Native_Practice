//vowel counter
#include<stdio.h>
int main()
{
    char text[50];
    int v_count=0;
    printf("Enter string: ");
    fgets(text, 50, stdin);
    for(int i=0; text[i]!='\0'; i++){
        if(text[i]=='\n'){
            text[i]='\0';
            break;
        }
    }
    for(int i=0; text[i]!='\0'; i++){
        if(text[i]=='A' || text[i]=='a' || text[i]=='E' || text[i]=='e' || text[i]=='I' || text[i]=='i' || text[i]=='O' || text[i]=='o' || text[i]=='U' || text[i]=='u'){
            v_count++;
        }
    }
    printf("No of vowel characters in %s is %d", text, v_count);
    return 0;
}