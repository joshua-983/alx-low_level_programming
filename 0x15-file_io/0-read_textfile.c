#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - txt file to print STDOUT
 * @filename: text file to read
 * @letters: number of letters that need to be read
 * Return: 0 when failed and FILE  name is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	ssize_t w;
	char *buf;
	ssize_t fd;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * letters); /* memory allocation*/
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
