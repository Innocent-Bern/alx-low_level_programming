#include "main.h"

/**
* factorial : Entry point
* Description : Funtion that prints the factorial of n
* @n: input integer
* Return : int value
*/

int factorial(int n)
{
    if (n == 0)
    {
        return (1);
    }
    if (n < 0)
    {
        return (-1);
    }
    return ( n * factorial(n-1));
}
