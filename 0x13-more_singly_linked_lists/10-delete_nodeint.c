#include "lists.h"

/**
 * delete_nodeint_at_index - A  function that deletes the node at
 * index index of a listint_t linked list
 * @head: top pointer of the node
 * @index: index of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *dex = *head;
	listint_t *point = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(dex);
		return (1);
	}
	while (m < index - 1)
	{
		if (!dex || !(dex->next))
			return (-1);
		dex = dex->next;
		m++;
	}
	point = dex->next;
	dex->next = point->next;
	free(point);

	return (1);
}
