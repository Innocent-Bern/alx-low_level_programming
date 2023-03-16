#include "main.h"
#include <stdlib.h>

/**
* array_range : Entry point
* Description : Function that creates an array of integers
* @min: input integer
* @max: input integer
* Return : int pointer to the newly created array
*/

int *array_range(int min, int max)
{
    int *arr;
    int i;
    int size = 1 + max - min;

    if (min > max)
        return (NULL);
    
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
    {
        free(arr);
        return(NULL);
    }
    for (i = 0;  min <= max; i++)
    {
        arr[i] = min;
        min += 1;
    }

    return (arr);
}
