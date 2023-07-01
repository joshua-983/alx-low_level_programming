#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: The sting to print
 * Return: void
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;

	if (length % 2 == 0) {
	start_index = length / 2;
	}
	else
	{
	start_index = (length - 1) / 2;
	}

	for (int i = start_index; i < length; i++)
	{
        putchar(str[i]);
	}

	putchar('\n');
}
