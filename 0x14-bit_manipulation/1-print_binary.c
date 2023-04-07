#include "main.h"

/**
* print_binary - function that prints the binary representation of a number
* @n: number to be printed
* Return: void
*/

void print_binary(unsigned long int n)
{
	uli num = n, len = 0;
	int i = 0;

	while (num >= 2)
	{
		num = num >> 1;
		len++;
	}
	for (i = (int)len; i >= 0; i--)
	{
		_putchar(n &(1u << i)? '1' : '0');
	}
	_putchar('\n');
}

