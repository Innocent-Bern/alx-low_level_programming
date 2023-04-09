#include "main.h"

/**
* clear_bit - function that clears bits at a given index
* @n: Address of the int we want to clear bits from
* @index: position of the bit we want to clear.
* Return: 1 if it worked or -1 on error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1u << index);
	return (1);
}

