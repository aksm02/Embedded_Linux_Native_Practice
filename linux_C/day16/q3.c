#include<stdio.h>
int main()
{
    #if defined(__linux__)
     printf("Linux Platform\n");
    #elif defined(_WIN32)
     printf("Windows Platform\n");
    #elif defined(__APPLE__)
     printf("MacOS Platform\n");
    #else
     printf("Unknown Platform\n");
    #endif
    return 0;
}