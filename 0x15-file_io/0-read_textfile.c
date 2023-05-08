#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a textfile and prints it to
 * standard output
 * @filename: The filename to be read
 * @letters: The number of letters to be read and printed
 * Return: The actual number of letters the function could
 * read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *str;
	ssize_t fd;
	ssize_t r;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	r = read(fd, str, letters);
	w = write(STDOUT_FILENO, str, r);

	free(str);
	close(fd);
	return (w);
}
