#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its paramters.
* @n: number of parameters
* Return: sum int value
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0, sum = 0;
va_list numbers;

va_start(numbers, n);
for (i = 0; i < n; i++)
{
sum += va_arg(numbers, int);
}
va_end(numbers);
return (sum);
}
