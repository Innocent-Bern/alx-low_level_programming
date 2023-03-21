#include <stdio.h>

/**
* main - Entry point
* Description: A program that prints the
name of the file it was compiled fron followed by a newline
* Return: 0
*/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
