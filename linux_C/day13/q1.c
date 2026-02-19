//to allocate memory for string using malloc. store user input dynamically
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s=malloc(50*sizeof(*s));
    printf("Enter string:\t");
    fgets(s, 50, stdin);
    s=realloc(s, strlen(s)+1);
    printf("%s", s);
    return 0;
}