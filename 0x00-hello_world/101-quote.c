#include <unistd.h>
#include <string.h>

/**
 * main - Entry
 * Return: 0 (success)
 */
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, str, strlen(str) + 1);
	
	return (0);
}
