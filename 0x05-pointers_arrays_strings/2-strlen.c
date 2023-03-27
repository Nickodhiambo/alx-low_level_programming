#include <stdio.h>

/**
 * _strlen - Returns length of a string
 *
 * @s: The string
 *
 * Return: String length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}

