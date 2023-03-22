#include "function_pointers.h"

/**
* int_index - function that searches for an integer
* @array: input pointer array
* @size: size of array
* @cmp: input function to that checks for int
* Return: Integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i, result;
if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);
for (i = 0; i < size; i++)
{
result = cmp(array[i]);
if (result != 0)
return (i);
}
return (-1);
}
