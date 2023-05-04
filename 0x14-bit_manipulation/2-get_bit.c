#include "main.h"

/**
 * get_bit - Converts a decimal to binary and returns a
 * binary digit at a given index
 * @n: The decimal number
 * @index: bit index
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

