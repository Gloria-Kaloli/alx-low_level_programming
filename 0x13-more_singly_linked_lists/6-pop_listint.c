#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * @head: head node to be deleted
 *
 * Return: 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int node;

	if (!head || !*head)
		return (0);
	node = (*head)->n;
	del = (*head)->next;
	free(*head);
	*head = del;

	return (node);
}
