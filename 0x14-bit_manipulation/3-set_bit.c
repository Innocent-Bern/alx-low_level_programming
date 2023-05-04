#include "main.h"

/**
* set_bit - A function that sets a bit to 1 at a given index
* @index: position of the bit we are interested in.
* @n: pointer to an unsigned long integer
* Return: 1 if it worked or -1 if an error occurred.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1u << index);
	return (1);
}

