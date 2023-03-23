#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Returns the sum of all its paramters.
* @n: number of parameters
* @separator: delimeter
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list myStrings;

va_start(myStrings, n);

for (i = 0; i < n; i++)
{
va_arg(myStrings, char *) != NULL ?
printf("%s", va_arg(myStrings, char *)) : printf("(nil)");

if (i + 1 != n && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(myStrings);
}
