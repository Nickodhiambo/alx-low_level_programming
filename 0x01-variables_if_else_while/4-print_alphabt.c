#include <stdio.h>

/**
 * main - Entry pt
 * Return: Always 0
 */

int main(void)
{
	char ch;


	/* Print lowercase alphabet excluding 'q' and 'e' */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	/* Print newline character */
	putchar('\n');
	return (0);
}
