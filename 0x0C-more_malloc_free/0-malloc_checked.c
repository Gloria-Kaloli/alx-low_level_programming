#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: unsigned int
 *
 * Return: 0 (successful)
 */

void *malloc_checked(unsigned int b)
{
	void *r;

	r = malloc(b);
	if (r == NULL)
	{
		exit (98);
	}
	return (r);
}
