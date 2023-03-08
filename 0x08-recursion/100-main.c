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
    r = is_palindrome("I guess I thought the dream-space would be all about the visual, but it's more about the feeling. My question is what happens when you start messing with the physics of it.ti fo scisyhp eht htiw gnissem trats uoy nehw sneppah tahw si noitseuq yM .gnileef eht tuoba erom s'ti tub ,lausiv eht tuoba lla eb dluow ecaps-maerd eht thguoht I sseug I");
    printf("%d\n", r);
    return (0);
}
