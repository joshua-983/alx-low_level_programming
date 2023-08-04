
#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 for big, 1 small
 */

int get_endianness(void)

{
	unsigned int abc = 1;
	char *c = (char *) &abc;

	return (*c);
}
