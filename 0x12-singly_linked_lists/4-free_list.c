#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list
 * @head: list to be freed
 *
 * Return: freed list
 */

void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
