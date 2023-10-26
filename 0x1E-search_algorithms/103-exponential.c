#include "search_algos.h"
#include "1-binary.c"

/**
  * exponentail_search - searches for value in sorted array
  * @array: pointer to integer array
  * @size: number of items in the array
  * @value: int to look up in array
  * Return: first index of value or -1 if not found.
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);
	while (bound < size && array[bound] < value)
		bound *= 2;
	return (binary_search(array, bound / 2 ,value));
}
