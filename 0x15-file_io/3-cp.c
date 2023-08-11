#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - memory allocation 1024 bytes to buffer
 * @file: name that buffer is storing char for
 * Return: pointer allocating buffer
 */

char *create_buffer(char *file)

{
	char *buffer;

	buffer = malloc(sizeof(char) *1024); /* MEMORY ALLOCATION */
	/* IF BUFFER IS EQUAL TO NULL RETURN BUFFER */
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Warning: Can't proceed to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - file descriptor to close
 * @fd: close the file descriptor.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "warning: Can't proceed to fd %d\n", fd);
		exit(100);
	}
}
 /**
  * main - content of file should be copied
 * @argc: the number of argument to pass
 * @argv: An array pointing to argv.
 *
 * Return: 0 on point
 *
 */

int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;
	/*THE NUMBER OF ARGUMENT NEED TO BE CHECKED HERE !*/
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	/* READ AND WRITE THE FILE UNTIL WARNING */
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Warning: Can't proceed from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Warning: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);
	/* close the file descriptor and return go job done*/
	free(buffer);
	close_file(to);
	close_file(from);
	return (0);
}
