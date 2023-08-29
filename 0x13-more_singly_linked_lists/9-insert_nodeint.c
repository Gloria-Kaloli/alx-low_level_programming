#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a
 * new node at a given position
 * @head: top node of the list
 * @idx: index where node is added
 * @n: data to insert
 *
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int r;
	listint_t *new;
	listint_t *dex = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (r = 0; dex && r < idx; r++)
	{
		if (r == idx - 1)
		{
			new->next = dex->next;
			dex->next = new;
			return (new);
		}
		else
			dex = dex->next;
	}
	return (NULL);
}
