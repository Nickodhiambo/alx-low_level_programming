#include "main.h"

/**
 * get_endianness - checks endianess of a computer system
 * Return: 0 for big endianness, 1 for little endianness
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *ch = (char *) &n;

	return (*ch);
}
