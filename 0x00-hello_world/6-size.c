#include <stdio.h>

/**
 * main - program that prints the size of various types on the computer it is compiled and run on..
 * Return: Always 0 (Success)
 */

int main(void)
{
	char a;
	int b;
	long long int d;
 	float f;	

	printf("Size of a char: %zu byte(s)\n",(unsigned long)sizeof(a));
	printf("Sze of  an int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", (unsigned)sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned)sizeof(d));
	printf("Size of a foat: %zu byte(s)\n", (unsigned)sizeof(f));
	return (0);
}	
