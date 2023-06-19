#include "main.h"
/**
* _islower - Entry point
* Description: checks if int c letter is lowercase
* @c: the integer value it receives
* Return: 1 if true. 0 if false.
*/
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (0);
	else if (c >= 'a' && c <= 'z')
	    return (1);
	return (0);
}
