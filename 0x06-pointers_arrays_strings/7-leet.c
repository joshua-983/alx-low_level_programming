#include <stdio.h>
#include <string.h>

/**
 * leet - function that encodes a string into 1337.
 * letters a and A are replaced by 4.
 * letters e and E are replaced by 3.
 * letters o and O are replaced by 0.
 * letters t and T are replaced by 7
i * letters l and L are replaced by 1
 * @s: pointer to string.
 *
 * Return: pointer to s.
 */

char *leet(char *str) 
{
	char *ptr = str;

	while (*ptr != '\0') 
	{
        if (*ptr == 'a' || *ptr == 'A') 
	{
	*ptr = '4';
        } else if (*ptr == 'e' || *ptr == 'E') 
	{
	*ptr = '3';
        } else if (*ptr == 'o' || *ptr == 'O') 
	{
	*ptr = '0';
        } else if (*ptr == 't' || *ptr == 'T') 
	{
	*ptr = '7';
        } else if (*ptr == 'l' || *ptr == 'L') 
	{
	*ptr = '1';
	}
	ptr++;
	}

	return str;
}

