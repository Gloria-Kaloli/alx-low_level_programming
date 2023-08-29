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
	listint_t *aft = NULL;

	while (*head)
	{
		aft = (*head)->aft;
		(*head)->aft = bef;
		bef = *head;
		*head = aft;
	}
	*head = bef;

	return (*head);
}
