#include <stdio.h>

/**
* print_square - Entry point
* Description: prints square from a given input 
* @size: is an integer
* Return: void
*/

void print_square(int size)
{
    int i;
    int y;

    if (size == 0)
    {
        _putchar('#');
        _putchar('\n');
        return;
    }

    for (i = 0; i <= size; i++)
    {
        for (y = 0; y <= size; y++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}
