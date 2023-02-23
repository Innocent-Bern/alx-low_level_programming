#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

// void print_triangles(int size)
// {
//     int i;
//     int y;

//     if (size == 0)
//     {
//         _putchar('#');
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

int main(void)
{
    return (0);
}
