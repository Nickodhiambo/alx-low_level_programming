#include <stdio.h>

/**
 * main - Entry point to program
 * Return: Should return to 0
 */

int main(void)
{
	char ch = 'a';/* Starting character */

	while (ch <= 'z')/* Loop through each letter in the alphabet */
	{
		putchar(ch);/* Print current letter */
		ch++;/* Move to the next letter */
	
	}
	putchar('\n');
	return(0);
}
