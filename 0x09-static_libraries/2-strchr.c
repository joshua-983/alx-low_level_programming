#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input in values 
 * @c: input in values
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int q = 0;

	for (; s[q] >= '\0'; q++)
	{
		if (s[q] == c)
			return (&s[q]);
	}
	return (0);
}

