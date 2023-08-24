#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list
 * @h: list to print
 *
 * Return: number of printed lists
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		l++;
		h = h->next;
	}
	return (l);
}
