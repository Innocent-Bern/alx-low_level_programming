#include "main.h"

/**
* times_table - Entry point
* Description: prints the 9 times table starting with 0
* Return: void
*/

void times_table(void)
{
    int n, j;

    for (n = 0; n <= 9; n++)
    {
        for (j = 0; j <= 9; j++)
        {
            if(n * j > 9)
            {
                _putchar(n * j / 10 + '0');
                _putchar(n * j % 10 + '0');
            }
            _putchar(n*j + '0');
            if(j == 9)
            {
                _putchar('\n');
            }
            else
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }
}