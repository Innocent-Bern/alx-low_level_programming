#include "main.h"

/**
* int _sqrt_recursion : Entry point
* Description : Funtion that returns the naural square root of a number
* @n: input integer
* Return : Void.
*/

int checkCounter(int n, int counter)
{
    if ((n / counter) == counter && (n % counter) == 0)
    {
        return (counter);
    }
    if (counter > (n/2))
    {
        return (-1);
    }
    return (checkCounter(n, counter + 1));
}
int _sqrt_recursion(int n)
{
    int counter = 1;
    if (n < 0)
        return (-1);
    return (checkCounter(n, counter));
}
