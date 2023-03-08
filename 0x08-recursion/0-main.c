#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n');
        return;
    }
    putchar(*(s + 0));
    _puts_recursion(s+1);
}
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}