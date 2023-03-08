#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int checkPrime(int n, int counter)
{
    if (n % counter == 0)
    {
        return (0);
    }
    if ( counter > (n / 2))
    {
        return (1);
    }
    return (checkPrime(n, counter + 1));
}
int is_prime_number(int n)
{
    int counter = 2;
    if (n <= 1)
        return (0);
    return (checkPrime(n, counter));
}
int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}