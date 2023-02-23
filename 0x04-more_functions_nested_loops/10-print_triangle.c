#include "main.h"

/**
* void print_triangle - Entry point
* Description: a trangle shape
* Return: void
*/

void print_triangle(int size)
{
	int i = 1, y;

	while (i <= size && size > 0)
	{
		y = 0;
		while (y < size - i)
		{
			_putchar(' ');
		    y++;
		}
		y = 0;
		while (y < i)
		{
			_putchar('#');
			y++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}