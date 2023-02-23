#include "main.h"

/**
* print_square - Entry point
* Description: prints square from a given input 
* @size: is an integer
* Return: void
*/

// void print_square(int size)
// {
//     int i;
//     int y;

//     if (size <= 0)
//     {
//         _putchar('\n');
//         return;
//     }

//     for (i = 0; i <= size; i++)
//     {
//         for (y = 0; y <= size; y++)
//         {
//             _putchar('#');
//         }
//         _putchar('\n');
//     }
// }
void print_square(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}