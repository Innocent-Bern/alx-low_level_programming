#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
    int x, y, trackA, trackB, sumLeft, sumRight;

    trackA = 0;
    trackB = size;
    sumLeft = 0;
    sumRight = 0;
    printf("%d", a);
    // for (x = 0; x < size; x++)
    // {
    //     sumLeft += *a[x][trackA];
    //     sumRight += *a[x][trackB];
    //     trackA++;
    //     trackB--;
    // }
    // printf("%d, %d\n", sumLeft, sumRight);
}
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}