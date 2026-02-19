//array of structures to store and display 5 books
#include<stdio.h>
typedef struct{
    int bid;
    char title[50];
    int cost;
}book;
int main()
{
    book lib[5];
    for(int i=0; i<5; i++){
        printf("\nEnter id of book %d: ", i+1);
        scanf("%d", &lib[i].bid);
        printf("\nEnter title of book %d: ", i+1);
        getchar();
        fgets(lib[i].title, 50, stdin);
        printf("\nEnter cost: ", i+1);
        getchar();
        scanf("%d", &lib[i].cost);
    }
    for(int i=0; i<5; i++){
        printf("\nID:%d\tTitle:%s\tCost:Rs. %d\n", lib[i].bid, lib[i].title, lib[i].cost);
    }
    return 0;
}