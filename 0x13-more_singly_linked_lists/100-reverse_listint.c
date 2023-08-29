#include "lists.h"

/**
 * reverse_listint - A  function that reverses a listint_t linked list
 * @head: top pointer
 *
 * Return:  function that reverses a listint_t linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = next;
	}
	*head = bef;

	return (*head);
}
