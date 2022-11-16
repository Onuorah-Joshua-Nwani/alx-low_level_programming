#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @: the char to print
 * Return: On success 1.
 * On error, -1 is returned and set appropirately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
