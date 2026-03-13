#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
int main()
{
    FILE *fptr;
    fptr=fopen("log.txt", "r");
    if(NULL==fptr){
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    return 0;
}