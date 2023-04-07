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
	uli len = 0, num = n;

	while (num > 1)
	{
		num = num >> 1;
		len++;
	}
	if (index > len)
		return (-1);
	len -= index;
	return (n & (1u << len) ? 1 : 0);
}

