//to check if a character is a vowel and in lowercase
#include<stdio.h>
void vl_checker(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        printf("%c is a vowel and in lowercase", c);
    }
    else {
        printf("%c is either not a vowel or not in lowercase or both", c);
    }
}
int main()
{
    char c;
    printf("Enter a single character: ");
    scanf("%c", &c);
    vl_checker(c);
    return 0;
}