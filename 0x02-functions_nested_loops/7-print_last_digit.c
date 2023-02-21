#include "main.h"

/**
 * print_last_digit - Entry point
 * Description: returns the last value of an interger
 * Return: int
 */

int print_last_digit(int n)
{
n = n % 10;
_putchar( _abs(n) + '0');
return (_abs(n));
}
