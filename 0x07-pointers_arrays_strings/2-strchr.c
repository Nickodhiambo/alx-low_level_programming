#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character to be located
 * Return: A pointer to the first occurence of char c
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}
	return (NULL);
}

