#include "main.h"
#include <stdlib.h>
/**
* create_array : Entry point
* Description: Function that creates an array of characters and initializes it with a specific character
* @size: Input integer
* @c: input string
* Return: A pointer to the array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
    char *myArry = malloc(sizeof(char) * size);

    if (size <= 0)
        return NULL;
    return (myArry);
}
