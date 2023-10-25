#include "search_algos.h"

/**
 * print_func - prints items of an array
 * @array: array input
 * @upper: highest index in search range
 * @lower: lowest index in search range
 * Return: void
*/
void print_func(int *array, int upper, int lower)
{
	if (array == NULL)
		return;

	printf("Searching in array: ");
	while (lower < upper + 1)
	{
		printf("%d", array[lower]);
		if (lower + 1 != upper + 1)
			printf(", ");
		lower++;
	}
	printf("\n");
}

/**
 * binary_search - half interval search of an array
 * @array: input interger array
 * @size: number of items in the the array
 * @value: number to look up in the array
 * Return: index of value or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	int lower = 0, upper = size - 1;

	while (lower <= upper)
	{
		int mid = (lower + upper) / 2;

		print_func(array, upper, lower);

		if (array[mid] < value)
			lower = mid + 1;
		else if (array[mid] > value)
			upper = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
