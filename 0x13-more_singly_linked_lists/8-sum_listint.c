#include "lists.h"

/**
 * sum_listint - A  function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head: top data
 *
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *m = head;

	while (m)
	{
		sum += m->n;
		m = m->next;
	}
	return (sum);
}
