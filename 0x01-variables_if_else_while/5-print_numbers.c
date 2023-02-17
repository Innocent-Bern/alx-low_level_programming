#include <stdio.h>
#include <unistd.h>

/**
* main -Entry point
* Description: prints single digit numbers of 0-9
* Return: Always 0 (success)
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
