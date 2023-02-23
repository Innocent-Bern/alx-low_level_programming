#include "main.h"
/**
* more_numbers - Entry point
* Description: prints digit between 0 and 14 ten times
* @i: integer value
* Return: void
*/
void more_numbers(void)
{
    int i;
    int y;

    for (y = 0; y <= 10; y++)
    {
        for (i = 0; i <= 14; i++)
        {
            if(i > 9)
            {
                _putchar(i / 10 + '0');
                _putchar(i % 10 + '0');
            } else 
            {
                _putchar(i + '0');
            }
        }
        _putchar('\n');
    }
}
