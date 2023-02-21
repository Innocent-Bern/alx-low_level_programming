#include "main.h"
/**
* _isalpha - Entry point
* Description: checks if int c letter is a letter
* @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
int _isalpha(int c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
    return (1);
    }
    return (0);
}
