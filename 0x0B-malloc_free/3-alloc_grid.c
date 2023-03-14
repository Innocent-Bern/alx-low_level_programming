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
    int i, y;
    int **myarr;

    myarr = malloc(sizeof(int *) * height);
    for (i = 0; i < height; i++)
    {
        myarr[i] = malloc(sizeof(int) * width);
    }
    for (i = 0; i < height; i++)
    {
        for (y = 0; y < width; i++)
        {
            myarr[i][y] = 0;
        }
    }
    return (myarr);
}
