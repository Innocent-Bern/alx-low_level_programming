#include "main.h"

/**
* string_touppper : function that capitalizes all the words of a string
* @str: input string
* Return : char string
*/

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
        if (str[index] >= 'a' && str[index] <= 'z')
        {
            str[index] -= 32;
        }
		index++;
	}

	return (str);
}
