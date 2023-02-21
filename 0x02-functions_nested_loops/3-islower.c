#include "main.h"

/**
* _islower - Entry point
* Description: checks if letter is lower case
* Return: Always 0 (success)
*/

int _islower(int c)
{
    if (c >='A' && c <= 'Z')
    {
        return (0);
    }else if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    return (0);
}
