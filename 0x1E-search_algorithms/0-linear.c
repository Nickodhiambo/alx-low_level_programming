#include "search_algos.h"

/**
 * linear_search - Searches for a value linearly in an array of integers
 * @array: An array of integers
 * @size: The array's size
 * @value: Item to searchh
 * Return: Index of value to search
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if array is empty */
	if (array == NULL)
		return (-1);

	/* Iterate through array to find value */
	for (i = 0; i < size; i++)
	{
		/* Print each searched value */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* Check for matching value and return the index */
		if (array[i] == value)
			return (i);
	}
	/* Value not found, return -1 */
	return (-1);
}
