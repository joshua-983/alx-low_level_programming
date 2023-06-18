#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Coding point 
 * Return: Always 0 (Success)
 */

int main(void)

{
	char low;

	for (low = 'b'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
