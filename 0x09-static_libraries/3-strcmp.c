#include "main.h"

/**
 * _strcmp - compare between string
 * @s1: input in  value
 * @s2: input in value
 *
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)

{
	int f;

	f = 0;
	while (s1[f] != '\0' && s2[f] != '\0')
	{
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
	f++;
	}
	return (0);
}


