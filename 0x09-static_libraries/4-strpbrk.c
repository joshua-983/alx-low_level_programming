#include "main.h"

/**
 * _strpbrk - Enter some codes
 * @s: input in some values
 * @accept: input in some accepted values or inputs
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)

{
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
		if (*s == accept[m])
		return (s);
		}
	s++;
	}

return ('\0');
}

