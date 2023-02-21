#include "main.h"

/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of the integer n
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
    return (n);
}