#include "main.h"

/**
* flip_bits - function the number of bits one would need flip to get
*	from one number to another.
* @n: input int
* @m: input int
* Return: Number of bits needed to be flipped.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* count the number of bits that are different */
	uli temp = n > m ? n : m;
	int len = 0, res = 0;

	while (temp > 1)
	{
		temp = temp >> 1;
		len++;
	}
	for (; len >= 0; len--)
	{
		res += (m & (1u << len)) ^ (n & (1u << len)) ? 1 : 0;
	}

	return (res);
}

