#include "main.h"
#include <stdlib.h>

/**
 * _calloc - A function that allocates memory for an array, using malloc
 * @nmemb: size of elements
 * @size: int
 *
 * Return: NULL if mallocs fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *r;
	size_t p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(nmemb * size);
	if (r == NULL)
		return (NULL);
	for (p = 0; p < (nmemb * size); p++)
		r[p] = 0;
	return (r);
}
