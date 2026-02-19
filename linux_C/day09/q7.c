//using pointer to count no of vowels in a string
#include<stdio.h>
int main()
{
    int vc=0;
    char text[50];;
    printf("Enter string: ");
    fgets(text, 50, stdin);
    char *p=text;
    while(*p!='\n' && *p!='\0'){
        if(*p=='A' || *p=='a' || *p=='E' || *p=='e' || *p=='I' || *p=='i' || *p=='O' || *p=='o' || *p=='U' || *p=='u'){
            vc++;
        }
        p++;
    }
    printf("There are %d vowels in %s.", vc, text);
    return 0;
}