#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates space for an array in memory
 * @nmemb: Array size
 * @size: Size of each element
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, j = 0;
	char *ptr;

	j = nmemb * size;

	ptr = malloc(j);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);

	while (i < j)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
