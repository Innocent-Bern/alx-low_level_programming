#include "main.h"
#include <stdio.h>
/**
* binary_to_uint - function that converts a binary number to unsigned int
* @b: a pointer to a string of 1 and 0 characters
* Return: the converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		if ((b[len] - '0') >  1 || (b[len] - '0') < 0)
			return (0);
		len++;
	}
	while (len > 0)
	{
		if ((b[i] - '0') == 1)
			sum += 1 << (len - 1);
		i++;
		len--;
	}
	return (sum);
}

