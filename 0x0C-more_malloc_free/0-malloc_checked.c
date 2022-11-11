#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - array for prints a string
 * @b: number of memory
 * Return: void
 */


void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}

