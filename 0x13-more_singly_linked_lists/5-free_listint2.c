#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: top list to be feed
 *
 * Return: 0 (successful)
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;
	while (*head)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	*head = NULL;
}
