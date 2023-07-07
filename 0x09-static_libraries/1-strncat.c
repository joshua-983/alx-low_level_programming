#include "main.h"

/**
 * _strncat - concatenated 2 strings
 * @dest: input in values
 * @src: input in values
 * @n: input in values
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int q;
	int w;

	q = 0;
	while (dest[q] != '\0')
	{
		q++;
	}
	w = 0;
	while (w < n && src[w] != '\0')
	{
	dest[q] = src[w];
	q++;
	w++;
	}
	dest[q] = '\0';
	return (dest);
}
