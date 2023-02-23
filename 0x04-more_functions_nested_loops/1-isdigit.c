#include "main.h"
/**
* _isdigit - Entry point
* Description: checks if int c is a digit between 0 and 9
* @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
int _isdigit(int c)
{
    if (c >= 0 && c <= 9)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
