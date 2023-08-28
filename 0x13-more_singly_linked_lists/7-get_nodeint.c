#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a
 * listint_t linked list
 * @head: top node
 * @index: index of nth node
 *
 * Return: NULL if node doesnt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int in = 0;
	listint_t *dex = head;

	while (dex && in < index)
	{
		dex = dex->next;
		in++;
	}
	return (dex ? dex : NULL);
}
