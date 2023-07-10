#include "main.h"
#include <stdlib.h>

/**
 *create_array - array of chars
 * @size: array size
 * @c: char of an array
 *
 * Return: The filled array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int AB;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (AB = 0; AB < size; AB++)
	{
		s[AB] = c;
	}
	return (s);
}
