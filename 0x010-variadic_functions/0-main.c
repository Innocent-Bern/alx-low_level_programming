#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}