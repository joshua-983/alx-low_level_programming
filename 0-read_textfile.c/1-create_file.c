#include "main.h"

/**
 * create_file - the need to create a file
 * @filename: A pointer pointing to the file name to create
 * @text_content: pointer to the string to write
 * Return: fail if --1 or -1
 */

int create_file(const char *filename, char *text_content)

{
	int fd, w, len = 0;

	if (filename == NULL) /* Check if file name is NULL*/
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600); /* Open the file in write mode*/
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd); /* close the file*/
	/* return the code if every thing is successful*/
	return (1);
}
