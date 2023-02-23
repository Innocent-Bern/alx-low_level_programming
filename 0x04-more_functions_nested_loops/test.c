#include <stdio.h>

void print_triangles(int size)
{
    int i;
    int y;

    if (size == 0)
    {
        putchar('#');
        putchar('\n');
        return;
    }

    for (i = 0; i <= size; i++)
    {
        for (y = 0; y <= size; y++)
        {
            putchar('#');
        }
        putchar('\n');
    }
}

int main(void)
{
    print_triangles(3);
    return (0);
}
