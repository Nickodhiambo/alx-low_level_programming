#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 *
 * @a: Integer 1
 * @b: integer 2
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
