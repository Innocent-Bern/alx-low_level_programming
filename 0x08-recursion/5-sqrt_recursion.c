#include "main.h"

/**
* int _sqrt_recursion : Entry point
* Description : Funtion that returns the naural square root of a number
* @n: input integer
* Return : Void.
*/



int checkCounter(int n, int counter)
{
    if (counter * counter == n)
    {
        return (counter);
    }
    return (checkCounter(n, counter + 1));
}
int _sqrt_recursion(int n)
{
    int counter = 0;
    if (n < 0)
        return (-1);
    return (checkCounter(n, counter));
}
0