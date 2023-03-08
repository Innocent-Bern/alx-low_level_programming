#include "main.h"

/**
* int _pow_recursion : Entry point
* Description : Funtion that the value of x raised to the power of y
* @x: input integer
* @y: input integer
* Return : int value
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    if (y == 0)
    {
        return (1);
    }
    return (x *= _pow_recursion(x, y-1));
}