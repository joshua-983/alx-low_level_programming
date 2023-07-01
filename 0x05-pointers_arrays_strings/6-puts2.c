#include <stdio.h>

/**
 * puts2 - a function that prints every other character as string.
 * @str: the sring to worked on.
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
	i++;
	}
	for (i = 0; i < j; i += 2)

	putchar(str[i]);
	i += 2;
	}
	putchar('\n');
}
