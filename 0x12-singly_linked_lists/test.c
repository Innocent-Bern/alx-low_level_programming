#include <stdio.h>

void __attribute__((constructor)) constructor()
{
    printf("This is a test\n");
}

