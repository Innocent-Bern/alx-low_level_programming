#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list myStrings;

va_start(myStrings, n);

for (i = 0; i < n; i++)
{
va_arg(myStrings, char *) != NULL ? 
printf("%s", va_arg(myStrings, char *)) : 
printf("(nil)");
if (i + 1 != n && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(myStrings);
}


int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}