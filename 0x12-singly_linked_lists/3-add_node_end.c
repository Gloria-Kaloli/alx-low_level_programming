#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - A function that adds a new node to the end
 * of linkes list_t list
 * @head: top pointer of list
 * @str: string in new mode
 *
 * Return: adress of new element, Null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	while (t->next)
		t = t->next;
	t->next = n;

	return (n);
}
