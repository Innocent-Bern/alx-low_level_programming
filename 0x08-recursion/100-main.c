#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strlen(char *s, int num)
{
    if (*s)
    {
        num += 1;
    } else
    {
        return (num);
    }
    return (_strlen(s+1, num));
}

int palCheck(char *s, char *pal, int myStrLen)
{
    if (*s != '\0' && *s == *(pal + myStrLen))
    {
        if (myStrLen == 0)
        {
            return (1);
        }
        s++;
        palCheck(s, pal, myStrLen -1 );
    } else 
    {
        return (0);
    }
    return (palCheck(s, pal,myStrLen -1));
}
int is_palindrome(char *s)
{
    int myStrLen = 0;
    myStrLen= _strlen(s, myStrLen);
    return (palCheck(s, s,myStrLen - 1));
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
