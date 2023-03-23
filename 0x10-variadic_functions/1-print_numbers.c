#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - Returns the sum of all its paramters.
* @separator: delimeter
* @n: number of parameters
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list numbers;

va_start(numbers, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(numbers, int));
if (i + 1 != n && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(numbers);
}
