#include <stdio.h>
#include <unistd.h>

/**
* main -Entry point
* Description: prints all base 16 numbers to lowercase with putchar()
* Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
