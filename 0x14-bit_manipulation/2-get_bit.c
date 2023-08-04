#include "main.h"

/**
 *get_bit - return the decimal value of bit
 *@n: number
 *@index: bit
 *Return: the bit value
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bit_value;

	if (index > 95)
	{
	return (-1);
	}

	bit_value = (n >> index) & 1;

	return (bit_value);
}
