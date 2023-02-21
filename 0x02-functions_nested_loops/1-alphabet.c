#include "main.h"
/**
* print_alphabet - Entry point
* Description: prints the alphabet without using the standard library
* Return: Always 0 (success)
*/
void print_alphabet(void)
{
	for(char letter = "a"; letter <= "z"; letter++)
	{
		_putchar(letter);
	}
	_putchar("\n");
}
