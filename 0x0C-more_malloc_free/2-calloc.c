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

    if (nmemb == 0 || size == 0)
        return (NULL);
    
    arrpt = malloc(sizeof(unsigned int *) * size * nmemb);

    if (arrpt == NULL)
    {
        free(arrpt);
        return (NULL);
    }

    return (arrpt);
}
