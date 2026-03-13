#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
    FILE *fptr;
    fptr=fopen("log.txt", "r");
    if(NULL==fptr){
        perror("Error");
        exit(EXIT_FAILURE);
    }
    return 0;
}