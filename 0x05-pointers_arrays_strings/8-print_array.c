#include "main.h"

/**
 * print_array - print an element of array
 * @a: array name
 * @n: number elemnt
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int d;

	for (d = 0; d < (n - 1); d++)
	{
		printf("%d, ", a[d]);
	}
		if (d == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}


