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
	int ff, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (ff = 23; ff >= 0; ff--)
	{
		current = exclusive >> ff;
		if (current & 1)
			count++;
	}

	return (count);
}

