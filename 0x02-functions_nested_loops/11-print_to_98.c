#include <stdio.h>
#include "main.h"

/**
* print_to_98 - Entry point
* @n: starting interger
* Description: adds two integers and returns the result
* Return: void
*/
void print_to_98(int n)
{
    while (n >= 98)
    {
        if (n == 98)
        {
            printf ("%d\n", n);
            return;
        }
        else
        {
        printf("%d, ", n);
        n--;
        }
    }
    while (n <= 98)
    {
        if (n == 98)
        {
            printf ("%d\n", n);
            return;
        }
        else
        {
            printf ("%d, ", n);
            n++;
        }
    }
}
