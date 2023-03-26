#include <stdio.h>

/**
 * main - Prints two two digit numbers
 * between 0 and 99
 * Return: 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			int first_dgt_i = i / 10;
			int second_dgt_i = i % 10;
			int first_dgt_j = j / 10;
			int second_dgt_j = j % 10;

			putchar('0' + first_dgt_i);
			putchar('0' + second_dgt_i);
			putchar(' ');
			putchar('0' + first_dgt_j);
			putchar('0' + second_dgt_j);

			if (i < 98 || j < 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
