#include "main.h"
/**
* print_numbers - Entry point
* Description: prints digit between 0 and 9 apart from 2 and 4
* @i: integer value
* Return: void
*/
void print_numbers(void)
{
    int i;

    for (i = 0; i <=9; i++)
    {
        if (i == 2 || i == 4)
            continue;
        _putchar(i + '0');
    }
    _putchar('\n');
}
