#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of parameters passed to it
 * @n: The number of parameters passed
 * ...: A variable number of parameters
 * Return: 0 if n is 0, otherwise a sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	va_end(ap);

	return (sum);
}
