#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Adds two numbers
 * @a: First no
 * @b: Second no
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substracts two numbers
 * @a: First no
 * @b: Second no
 * Return: The difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two numbers
 * @a: First no
 * @b: Second no
 * Return: The product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides two numbers
 * @a: First no
 * @b: Second no
 * Return: Result of divison of a by b
 *
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Returns the reminder of division of a by b
 * @a: First no
 * @b: Second no
 * Return: Reminder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
