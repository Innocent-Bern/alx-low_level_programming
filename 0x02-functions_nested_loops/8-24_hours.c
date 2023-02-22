#include "main.h"

/**
* jack_bauer - Entry point
* Description: prints every minute of the day
* Return: void
*/

void jack_bauer(void)
{
    int minute, hours;

    for (hours = 0; hours < 24; hours++)
    {
        for (minute =0; minute < 60; minute++)
        {
            if (hours < 10)
            {
                _putchar('0');
                _putchar(hours + '0');
                _putchar(':');
            }
            else if (hours >= 10)
            {
                _putchar( hours / 10 + '0');
                _putchar( hours % 10 + '0');
                _putchar(':');
            }
            if (minute < 10)
            {
                _putchar('0');
                _putchar(minute + '0');
            }
            else if (minute >= 10)
            {
                _putchar( minute / 10 + '0');
                _putchar( minute % 10 + '0');
            }
            _putchar('\n');
        }
    }
}
