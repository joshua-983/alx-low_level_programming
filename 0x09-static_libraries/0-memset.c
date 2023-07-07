#include "main.h"

/**
 * _memset - create a block of code of memory with a specific value
 * @s:memory to fill
 * @b: exact value
 * @n: bytes to be changed
 *
 * Return: array to be changed for n bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int q = 0;

	for (; n > 0; q++)
	{
	s[q] = b;
	n--;
	}
	return (s);
}
