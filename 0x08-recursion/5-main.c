#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
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
    checkCounter(n, counter + 1);
}
int _sqrt_recursion(int n)
{
    int counter = 1;
    if (n < 0)
        return (-1);
    checkCounter(n, counter);
}

int main(void)
{
    int r;

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(19);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}