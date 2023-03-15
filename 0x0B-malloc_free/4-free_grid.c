#include "main.h"
#include <stdlib.h>

/**
* free_grid : Entry point
* Description: Function that returns frees a 2d gird created in task 3
* @grid: Input pointer to grid
* @height: input height
* Return: A pointer to a 2 dimensional array of integers
*/

void free_grid(int **grid, int height)
{
    int x;

    for (x = 0; x < height; x++)
    {
        free(grid[x]);
    }
    free(grid);
}
