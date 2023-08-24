#include "lists.h"
#include <stdlib.h>

/**
 * list_len - A  function that returns the number of elements
 * in a linked list_t list
 * @h: number of elements
 *
 * Return: Number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}
