#include "main.h"

/**
 * wildcmp - compare two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: 1 if are the same, 0 not the same
 */

int wildcmp(char *s1, char *s2)

{

	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
