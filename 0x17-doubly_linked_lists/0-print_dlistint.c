#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Program that prints all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t y;

	for (y = 0; h != NULL; y++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (y);
}
