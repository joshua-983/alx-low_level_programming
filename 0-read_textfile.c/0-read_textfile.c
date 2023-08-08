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
	char *buf;
	ssize_t fd; /* FILE DESCRIPTOR*/
	ssize_t w; /* NUMBER OF BYTES WRTTEN AND READ*/
	ssize_t t;

	fd = open(filename, O_RDONLY); /*CHECK READ ONLY FILE*/
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters); /* THE NEED FOR MEMORY ALOCATION*/
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	/*RETURN THE NUMBER OF BYTES WRITTEN*/
	return (w);

}
