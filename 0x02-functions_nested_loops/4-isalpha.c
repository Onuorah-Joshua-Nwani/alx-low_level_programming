#include "main.h"

/**
 * _isalpha - checks for char alphabet
 * @c: char to be checked
 *
 * Retun: 1 if char is a lower or upper letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

