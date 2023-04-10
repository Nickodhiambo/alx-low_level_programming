#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *src;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			src = argv[i];
			for (j = 0; j < strlen(src); j++)
			{
				if (src[j] < 48 || src[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(src);
			src++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

