#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - Returns the natural square root number
 * @n: number to calculate
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n);

/**
 * _sqrt - calculate the natural square root
 * @n: the number to calculate the square root
 * @i: iterate number
 *Return: square root
 */

int _sqrt(int n, int i)

	int sqrt = i * i;

	if (sqrt > n)
	return (-1);
	if (sqrt == n)
	return (i);
	return (sqrt(n, i + 1));
}
