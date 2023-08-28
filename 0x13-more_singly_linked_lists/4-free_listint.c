#include "lists.h"

/**
 * free_listint - A  function that frees a listint_t list
 * @head: free list
 *
 * Return: 0 (successful)
 */

void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
