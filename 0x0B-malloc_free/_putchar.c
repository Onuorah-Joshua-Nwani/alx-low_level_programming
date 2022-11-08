#include <unistd.h>

/**
 * _putchar - writes the character c to sdout
 * @c: the character to print
 * Return: On Success 1
 * On error, -1 is returned and error is set appropirately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
