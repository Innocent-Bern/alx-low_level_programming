#include "search_algos.h"

/**
  * interpolation_search - searches for a value in a sorted array
  * @array: pointer to integer array
  * @size: number of items in the array
  * @value: int to look up in array
  * Return: first index of value or -1 if not found.
*/
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) && (value >= array[low])
			&& (value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low) /
				(array[high] - array[low]));

		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	if (value == array[low])
		return (low);
	return (-1);
}
