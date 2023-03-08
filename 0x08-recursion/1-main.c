#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void set_last(char *s, char **ls)
{
    if (*s == '\0')
    {
        *ls = s - 2;
        return;
    } else 
    {
        putchar(*s);
        set_last( s+ 1, ls);
    }
}
void _print_rev_recursion(char *s)
{
    char **last;
    set_last(s, last);
    putchar(**last);
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}