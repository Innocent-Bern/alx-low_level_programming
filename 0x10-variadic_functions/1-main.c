#include "variadic_functions.h"
#include <stdio.h>


/**
 * main - check the code
 *
 * Return: Always 0.
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
printf("%s ", separator);
}
}
printf("\n")
va_end(numbers);
}

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}