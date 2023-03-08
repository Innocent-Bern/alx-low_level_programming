#include "main.h"

/**
* int is_palindrome : Entry point
* Description : Funtion that returns 1 if a string is a palindrome and 0 if not.
* @s: input string
* @pal: input string
* Return : Void.
*/

char checkPal(char *pal)
{
    if (*pal == '\0')
        return (*pal);
    checkPal(pal + 1);
    return (*pal);
}
int is_palindrome(char *s)
{
    putchar(checkPal(s));
    return (1);
}
