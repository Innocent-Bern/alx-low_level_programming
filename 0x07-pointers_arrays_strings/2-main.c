#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
    int i = 0;
    char *rtnstr;

    while (s[i])
    {
        if (s[i] == c)
        {
            rtnstr = &s[i];
            break;
        } else if (s[i] == '\0')
        {
            return (NULL);
        }
        i++;
    }
    return (rtnstr);
}
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}