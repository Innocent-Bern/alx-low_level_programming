#include "main.h"

/**
* _puts - Entry point
* Description: prints a string followed by a newlinez
* @str: char pointer string input parameter
* Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
