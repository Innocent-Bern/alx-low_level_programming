#include "search_algos.h"
#include "1-binary.c"

/**
  * bin_search - searches for value in sorted array
  * @array: pointer to integer array
  * @low: lower bound
  * @high: upper bound
  * @value: value to look up
  * Return: index of value or -1 if not found
*/
int bin_search(int *array, int low, int high, int value)
{
	int mid = 0;

	while (low <= high)
	{
		mid = (high + low) / 2;

		print_func(array, high, low); 
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);

	}
	return (-1);
}
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

	return (bin_search(array, bound / 2, size -1 , value));
}
