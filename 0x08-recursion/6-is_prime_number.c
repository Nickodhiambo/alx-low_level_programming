#include <stdio.h>
#include "main.h"

int check_prime(int n, int i);
/**
 * is_prime_number - Returns if a number is a prime number
 * @n: The number to be checked
 * Return: An integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - Checks if a number is prime
 * @n: The number to be checked
 * @i: Iteration times
 * Return: 1 if a number is prime,
 * 0 if composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}


