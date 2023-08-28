#include "lists.h"
#include <stdio.h>

/**
 * print_listint - A function that prints all the elements of a listint_t list
 * @h: list of listint_t
 *
 * Return: all elements of listint_t
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
