#include "main.h"
#include <stdlib.h>

/**
* _realloc : Entry point
* Description : Function that reallocates a memory block using malloc and free
* @ptr: input pointer
* @old_size: input integer
* @new_size: input integer
* Return : void
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int i;

    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        free(ptr);
        return (new_ptr);
    }
    if (new_size == 0)
    {
        free(ptr);
        return (NULL);
    }
    if (new_size < old_size)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
        {
            free(new_ptr);
            return (NULL);
        }
        for (i = 0; i < new_size; i++)
        {
            new_ptr[i] = ptr[i];
        }
    } else if (new_size == old_size)
    {
        return (ptr);
    } else if (new_size > old_size)
    {
        new_ptr = malloc(old_size);
    }
    return (new_ptr);
}