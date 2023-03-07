#include "main.h"
#include <stdio.h>

/**
* _print_chessboard : Function that prints the sum of the two diagonals of a square matrix of integers
* @a: string input
* @size: integer input
* Return : void
*/

void print_diagsums(int *a, int size)
{
    int x, y, trackA, trackB, sumLeft, sumRight;

    trackA = 0;
    trackB = size;
    sumLeft = 0;
    sumRight = 0;

    for (x = 0; x < size; x++)
    {
        sumLeft += *a[x][trackA];
        sumRight += *a[x][trackB];
        trackA++;
        trackB--;
    }
    printf("%d, %d\n", sumLeft, sumRight);
}
