#include "main.h"
#include <stdio.h>

/**
 * main - Prints any arguments passed to it
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
