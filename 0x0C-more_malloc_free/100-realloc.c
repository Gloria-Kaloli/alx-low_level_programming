#include "main.h"
#include <stdlib.h>

/**
 * _realloc - A  function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: Nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *r;
	size_t a, max = new_size;
	char *oldpnt = ptr;

	if (ptr == NULL)
	{
		r = malloc(new_size);
			return (r);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	r = malloc(new_size);
			if (r == NULL)
				return (NULL);
		if (new_size > old_size)
			max = old_size;
		for (a = 0; a < max; a++)
			r[a] = oldpnt[a];
		free(ptr);
		return (r);
}
