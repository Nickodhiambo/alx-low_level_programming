#include "main.h"

/**
 * reverse_array - Reverses contents of an array of integers
 * @a: The array of integers
 * @n: The number of items in the array
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
