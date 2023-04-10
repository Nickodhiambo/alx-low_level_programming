#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiplies two numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 if program receives two arguments
 * else return 1
 */

int main(int argc, char *argv[])
{
	int i, j, mult;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		mult = i * j;
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
