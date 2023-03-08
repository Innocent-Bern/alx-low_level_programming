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
    }
    return (_strlen(s+1, num));
}
void rev(char *s, int myStrLen)
{
    if (myStrLen <= 0)
    {
        putchar(*(s + myStrLen));
        return;
    }
    putchar(*(s + myStrLen));
    rev(s, myStrLen - 1);
}

void _print_rev_recursion(char *s)
{
    int myStrLen = 0;

    myStrLen = _strlen(s, myStrLen);
    rev(s, myStrLen);
}

int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}




// void _print_rev_recursion(char *s)
// {
//     if(*s)
//     {
//         _print_rev_recursion(s+1);
//         _putchar(*s);
//     }
// }