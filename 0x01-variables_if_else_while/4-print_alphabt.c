#include <stdio.h>
#include <unistd.h>

/**
* main - Entry point
* Description: prints the alphabet in lowercase apart from e and q
* Return: Always 0 (success)
*/

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
