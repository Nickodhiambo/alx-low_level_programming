#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n items of an array of integers
 * @a: Array of integers
 * @n: Number of elements
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
