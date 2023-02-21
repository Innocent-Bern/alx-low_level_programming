#include "main.h"
/**
* print_alphabet - Entry point
* Description: prints the alphabet without using the standard library
* Return: Always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
