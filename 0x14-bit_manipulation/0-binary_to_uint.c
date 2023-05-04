#include "main.h"

/**
 * binary_to_uint - Converts a binary string to a decimal value
 * @b: The binary string
 * Return: A decimal value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i;
	int len = 0;
	int power;

	while (b[len] != '\0')
		len++;
	power = len - 1;
	if (!b)
		return (0);
	for (i = 0; i < len; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			decimal += (1 << power);
		}
		power--;
	}
	return (decimal);
}
