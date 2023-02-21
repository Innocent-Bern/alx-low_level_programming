#include "main.h"

/**
* print_alphabet - Entry point
* Description: prints the alphabet 10 times without using the standard library
* Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
	char letter;
	int counter;

	for (counter = 0; counter <10; counter++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
	
}

