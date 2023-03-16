#include "main.h"
#include <stdlib.h>

/**
* malloc_checked : Entry point
* Description : Function that allocates memory using malloc
* @b: input integer
* Return : void
*/

void *malloc_checked(unsigned int b)
{
    unsigned int *ptr = malloc(b);

    if (ptr == NULL)
    {
        free(ptr);
        return (98);
    } else
    {
        return (ptr);
    }
}