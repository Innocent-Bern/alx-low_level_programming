#include "main.h"

/**
* swap_int - Entry point
* Description: takes an int parameter and updates its value to 98
* @a: pointer input parament;
* @b: pointer input parament;
* Return: void
*/

void swap_int(int *a, int *b)
{
    *a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
