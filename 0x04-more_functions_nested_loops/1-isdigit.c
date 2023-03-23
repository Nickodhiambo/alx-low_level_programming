#include "main.h"

/**
 * _isdigit - Checks for a digit between 1 and 9
 * @c: The digit to be evaluated
 * Return: 1 if digit is (0-9), else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
