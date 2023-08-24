#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - A function that adds a new node
 * @head: top pointer in list
 * @str: string to add in node
 *
 * Return: Address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int len = 0;

	while (str[len])
		len++;
	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
