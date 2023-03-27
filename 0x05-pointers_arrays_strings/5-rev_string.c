#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string in question
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len = 0, index = 0;
	char ch;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		ch = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = ch;
	}
}
