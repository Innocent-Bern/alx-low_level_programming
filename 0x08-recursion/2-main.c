#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s, int num)
{
    if (*s == '\0')
    {
        return (num);
    } else
    {
        num += 1;
        _strlen(s+1, num);
    }
}

int _strlen_recursion(char *s)
{
    // int mystrlen = 0;
    // _strlen(s, mystrlen);
    // return (mystrlen);
    int mylen = 0;

    if (*s)
    {
        mylen++;
        mylen += _strlen_recursion(s+1);
    }
    return (mylen);
}

int main(void)
{
    int n;

    n = _strlen_recursion("You mustn't be afraid to dream a little bigger, darling.");
    printf("%d\n", n);
    return (0);
}