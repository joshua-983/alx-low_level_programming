#include "main.h"

/**
 * char *_strcpy - a function that copie string
 * @dest: copy string
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)

{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}

