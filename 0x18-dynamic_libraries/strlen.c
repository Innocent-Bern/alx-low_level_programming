#include "main.h"

/**
* _strlen - Entry point
* Description: returns the length of a string
* @s: char pointer string input parameter;
* Return: int length of string
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
