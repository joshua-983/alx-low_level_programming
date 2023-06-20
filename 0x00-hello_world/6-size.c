#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program that prints the size of various types on the computer it is compiled and run on..
 * Return: Always 0 (Success)
 */

int main(void)

{	

	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Sze of  an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a foat: %zu byte(s)\n", sizeof(float));

	return (0);

}	
