#include "main.h"
#include <stdio.h>

/**
* get_bit - function that get bit at an given index
* @n: number that will provide the bits.
* @index: position of the target bit
* Return: bit value or -1 if an error occurred
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (n & (1u << index) ? 1 : 0);
}

