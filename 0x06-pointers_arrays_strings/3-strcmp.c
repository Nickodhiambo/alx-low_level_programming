#include "main.h"

/**
 * _strcmp - Compares pointers to 2 strings
 * @s1: Pointer to string 1
 * @s2: Pointer to string 2
 * Return: if str1 < str2, the negative difference
 * of the first unmatched characters
 * if str1 == str2, 0
 * if str1 > str2, the positive difference of the first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
