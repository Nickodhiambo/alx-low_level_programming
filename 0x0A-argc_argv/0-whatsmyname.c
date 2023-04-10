#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name
 * @argc: Number of arguments
 * @argv: An array of string arguments
 * Return: 0(Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
