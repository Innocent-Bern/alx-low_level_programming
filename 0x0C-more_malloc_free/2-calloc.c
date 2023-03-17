#include "main.h"
#include <stdlib.h>

/**
* array_range : Entry point
* Description : Function that allocates memory of an array using malloc
* @nmemn: input integer
* @size: input integer
* Return : void
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *arrpt;
    unsigned int i;

    if (nmemb == 0 || size == 0)
        return (NULL);
    
    arrpt = malloc( size * nmemb);

    if (arrpt == NULL)
    {
        free(arrpt);
        return (NULL);
    }

    for (i = 0; i < (size * nmemb); i++)
    {
        arrpt[i] = '\0';
    }

    return (arrpt);
}
