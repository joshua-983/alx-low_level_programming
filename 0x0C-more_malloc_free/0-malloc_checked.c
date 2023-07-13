#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memory
 * @b:number of bytes
 * Return: a pointer.
 */

void *malloc_checked(unsigned int b)

{
	void *ptr = malloc(b);

	if (ptr == NULL) 
	{
	printf("Error: Memory allocation failed.\n");
	exit(98);
	}
	return (ptr);
}

