#include "main.h"

/**
 * flip_bits - function that return a number of bit to another
 *
 * @n: 1st
 * @m: 2nd number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	int fff, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (fff = 63; fff >= 0; fff--)
	{
		current = exclusive >> fff;
		if (current & 1)
			count++;
	}

	return (count);
}

