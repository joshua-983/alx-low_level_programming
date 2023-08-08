#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Text file that reads STDOUT.
 * @filename: txt file read
 * @letters: letters to be read
 * Return: print number of bytes ro 0 when NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)

{
	int fd; /* file descriptor */
	ssize_t nread, nwrite;

	if (filename == NULL)
	return (0);

	/* the files need to be wrtten in READONLY */
	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	/* There is the need to allocate a memory here */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	return (0);

	nread = read(fd, buf, letters);
	if (nread == -1)
	return (0);

	nwrite = write(STDOUT_FILENO, buf, nread);

	if (nwrite == -1 || nwrite != nread)
	return (0);

	free(buf);
	close(fd);
	return (nwrite);
}
