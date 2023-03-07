#include "main.h"
#include <stdio.h>

/**
* _print_chessboard : Function that prints the sum of the two diagonals of a square matrix of integers
* @a: string input
* @size: integer input
* Return : void
*/

\void print_diagsums(int *a, int size)
{
    int x, sumLeft, sumRight;

    sumLeft = 0;
    sumRight = 0;

    for (x = 0; x < size; x++)
    {
        sumLeft += a[x];
        a += size;
    }
    a -=size;
    for (x = 0; x < size; x++)
    {
        sumRight += a[x];
        a -= size;
    }
    printf("%d, %d\n", sumLeft, sumRight);
}
