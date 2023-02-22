#include "main.h"

/**
* times_table - Entry point
* Description: prints the 9 times table starting with 0
* Return: void
*/

void times_table(void)
{
    int n, j, multiple;

    for (n = 0; n <= 9; n++)
    {
        for (j = 0; j <= 9; j++)
        {
            multiple = n * j;
            
            if(multiple > 9)
            {
                _putchar(multiple / 10 + '0');
                _putchar(multiple % 10 + '0');
            }
            else if (multiple < 9 && j != 0)
            {
                _putchar(' ');
                _putchar(multiple + '0');
            }
            else if (j == 0)
            {
                _putchar(multiple + '0');
            }
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