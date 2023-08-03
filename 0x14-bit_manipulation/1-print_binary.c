#include "main.h"

/**
 * print_binary - prints the binary
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)

{
	int d, count = 0;
	unsigned long int current;

	for (d = 60; d >= 0; d--)
	{
		current = n >> d;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

