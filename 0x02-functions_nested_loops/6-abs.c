#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @i: the integer to be computed
 * Return: Absolute value of integer or 0
 */

int _abs(int i)
{
	if (i < 0)
	{
		int abs_val;

		abs_val = i * -1;
		return (abs_val);
	}
	return (i);
}
