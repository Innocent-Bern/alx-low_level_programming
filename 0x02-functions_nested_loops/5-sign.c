#include "main.h"
/**
* print_sign - Entry point
* Description: checks if n greater than or equal to zero
* @n: the integer value it receives
* Return: 1 if true. 0 if false.
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
