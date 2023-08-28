#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A  function that returns the number of elements
 * in a linked listint_t list
 * @h: linked list
 *
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
