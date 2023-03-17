#include <stdio.h>

/**
 * main - Entry poin
 * Return: Always return 0
 */

int main(void)
{
	char ch;

	/* Print lowercase alphabet */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	/* Print uppercase alphabet */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	/* print newline character */
	putchar('\n');
	return (0);
}
