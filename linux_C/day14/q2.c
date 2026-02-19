// to read and display the contents of data.txt
#include<stdio.h>
void main()
{
    int n;
    FILE *f;
    f=fopen("data.txt", "r");
    while(fscanf(f, "%d", &n)==1){
        printf("%d\n", n);
    }
    fclose(f);
}