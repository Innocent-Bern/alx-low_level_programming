#include "main.h"

/**
* _islower(int c) - Entry point
* Description: checks if letter is lower case
* Return: Always 0 (success)
*/

int _islower(int c)
{
    if (c >='A' && c <= 'z')
    {
        return (0);
    } else if (c >= 'a' && <= 'z')
    {
        return (1);
    }
}
