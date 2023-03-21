#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @i: Number to be targeted
 * Return: Last digit
 */

int print_last_digit(int i)
{
	int last_dgt;

	last_dgt = i % 10;
	if (last_dgt < 0)
	{
		last_dgt = last_dgt * -1;
	}
	_putchar(last_dgt);
	return (last_dgt);
}
