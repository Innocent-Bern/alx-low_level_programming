#include "main.h"

/**
* print_last_digit - Entry point
* Description: returns the last value of an interger
* @n: n is an integer
* Return: int
*/

int print_last_digit(int n)
{
n = (n % 10) * (n / n) ;
_putchar(n + '0');
return (n);
}
