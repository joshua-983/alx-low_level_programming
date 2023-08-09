#include "main.h"

/**
 * append_text_to_file - Appending txt to the end of file
 * @filename: A pointer to the end of the file
 * @text_content: add string to the end of the file
 *
 * Return: If the function fails or filename is NULL - -1.
 */

int append_text_to_file(const char *filename, char *text_content)

{
	int ab, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL) /* check if text is NULL */
	{
		for (len = 0; text_content[len];) /* INCREMENT len */
			len++;
	}

	ab = open(filename, O_WRONLY | O_APPEND); /* open the file in write and append mode*/
	w = write(ab, text_content, len);

	if (ab == -1 || w == -1)
		return (-1);

	close(ab); /* close the file */

	return (1); /*return when successful*/
}
