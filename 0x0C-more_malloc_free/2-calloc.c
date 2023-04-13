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
	void  *ptr;

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
