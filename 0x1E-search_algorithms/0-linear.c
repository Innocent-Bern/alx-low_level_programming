#include "search_algos.h"

/**
 * linear_search - performs sequential search on an array
 * @array: input int array
 * @size: number of items in the array
 * @value: number to look up in the array
 * Return: fount integer or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, *array);
		if (*array == value)
			return (index);
		array++;
		index++;
	}
	return (-1);
}
