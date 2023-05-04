#include "main.h"

/**
 * flip_bits - counts the number of bits required to flip
 * from number 1 to number 2
 * @n: first number
 * @m: second number
 *
 * Return: number of bits required to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, compute = 0;
	unsigned long int current;
	unsigned long int comp = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = comp >> i;
		if (current & 1)
			compute++;
	}

	return (compute);
}

