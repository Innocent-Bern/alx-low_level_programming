#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: returns the last value of an interger
 * Return: int
 */

int print_last_digit(int n)
{
n = n % 10;
_putchar( n + '0');
return (n);
}
