#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * to a program
 * @argc: The number of arguments
 * @argv: An array of string arguments
 * Return: 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
