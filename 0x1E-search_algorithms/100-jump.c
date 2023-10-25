#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches sorted array using jump search algorithm
 * @array: pointer integer array
 * @size: number of elements in the array
 * @value: int value to search for.
 * Return: index of value or -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	size_t block = 0, low = 0;

	while (block < size)
	{
		if (array[block] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", low, block);
			while (low <= block)
			{
				printf("Value checked array[%lu] = [%d]\n", low, array[low]);
				if (array[low] == value)
					return (low);
				low++;
			}
		}
		printf("Value checked array[%lu] = [%d]\n", block, array[block]);
		low = block;
		block += sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", low, block);
	printf("Value checked array[%lu] = [%d]\n", low, array[low]);
	return (-1);
}
