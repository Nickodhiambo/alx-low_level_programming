#include "main.h"

/**
 * _strncpy - Copies at most an  inputed number of
 * bytes into dest from string src
 * @dest: The buffer storing the string copy
 * @src: The source string
 * @n: The number of bytes to be copied from src
 * Return: The resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
