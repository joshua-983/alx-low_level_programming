#include <unistd.h>

/**
 * _putchar - the character c to stdout
 * @c: The character to print
 * Return: success 1.
 * On error, -1 is returned, and error is set apprpriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
