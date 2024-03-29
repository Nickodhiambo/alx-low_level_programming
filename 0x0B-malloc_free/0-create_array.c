#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: The size of the array
 * @c: The characters to fill the array
 * Return: A pointer to the array
 * or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
