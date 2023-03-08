#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
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
    return (mystrlen);
}

int main(void)
{
    int n;

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}