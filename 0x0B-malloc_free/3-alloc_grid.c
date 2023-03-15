#include "main.h"
#include <stdlib.h>

/**
* alloc_grid : Entry point
* Description: Function that returns a pointer to a 2 dimensional array of integers.
* @width: Input integer
* @height: input height
* Return: A pointer to a 2 dimensional array of integers
*/

int **alloc_grid(int width, int height)
{
    int **arr;
    int y;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    
    arr = malloc(sizeof(int *) * height);

    for (y = 0; y < height; y++)
    {
        arr[y] = malloc(sizeof(int) * width);
    }
    return (arr);

}
