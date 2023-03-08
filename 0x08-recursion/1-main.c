#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
    int mystrlen = 0;
    void _strlen(char *s)
    {
        if (*s == '\0')
            return;
        mystrlen += 1;
        _strlen(s+1);
    }
    _strlen(s);
    void rev(char *s)
    {
        if (mystrlen >= 0)
        {
            putchar(*(s + mystrlen - 1));
            printf("%d\n", mystrlen);
            mystrlen--;
            rev(s + mystrlen);
        }else
        {
            return;
        }
    }
    rev(s);
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}