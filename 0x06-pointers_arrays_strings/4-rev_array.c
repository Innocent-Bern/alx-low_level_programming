#include "main.h"

/**
* reverse_array : Function that reverses an array of n integers
* @a: input array
* @n: input integer
* Return : an int 1 or 0
*/

void reverse_array(int *a, int n)
{
    int acpy = *a;
    int *acppt = &acpy;
    int i = 0;

    while (i <= n)
    {
        *(a + i) = acppt[n - i];
        i++;
    }
}
