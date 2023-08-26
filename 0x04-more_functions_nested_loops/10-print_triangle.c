#include "main.h"
/**
 * print_triangle - prints a triangle.
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, j;

		for (b = 1; b <= size; b++)
		{
			for (j = b; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= b; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}


