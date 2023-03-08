#include "main.h"

/**
* is_prime_number : Entry point
* Description : Funtion that returns 1 if the input integer is a prime number, otherwise return 0
* @n: input integer
* Return : int value
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
