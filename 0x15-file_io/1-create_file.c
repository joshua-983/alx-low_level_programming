#include "main.h"

/**
 * create_file - lets create a file
 * @filename: create a file to point to the name
 * @text_content: THE pointer to the string of which to write the file
 * Return: fail --1 or -1
 */

int create_file(const char *filename, char *text_content)

{

	int fd, w, len = 0;
	/*check if filename is NULL*/
	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (len = 0; text_content[len];)
		len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	/*write text content to the file*/
	w = write(fd, text_content, len);
	if (fd == -1 || w == -1)
		return (-1);
	/* close the file and return 1 */
		close(fd);
	return (1);
}
