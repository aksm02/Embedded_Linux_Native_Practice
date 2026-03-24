#include <stdio.h>
#include<string.h>
#define TO_STR(x) #x

int main() {
    printf("%s\n", TO_STR( 123\\12 ));
    printf("%d\n", strlen(TO_STR(123\\12)));
    return 0;
}