/*
 * File: 0-puts_recursion.c
 */
#include "main.h"

/**
 * File: 0-puts_recursion.c
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printed.
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
