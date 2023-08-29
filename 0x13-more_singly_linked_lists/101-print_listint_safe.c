#include"lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A function that counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: pointer to the head of listint_t
 *
 * Return: If the list is not looped - 0
 * Otherwise - the number of unique nodes in the list
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *totise, *hr;
	size_t nod = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	totise = head->next;
	hr = (head->next)->next;
	while (hr)
	{
		if (totise == hr)
		{
			totise = head;
			while (totise != hr)
			{
				nod++;
				totise = totise->next;
				hr = hr->next;
			}
			totise = totise->next;
			while (totise != hr)
			{
				nod++;
				totise = totise->next;
			}
			return (nod);
		}
		totise = totise->next;
		hr = (hr->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - A function that prints a listint_t list safely
 * @head: pointer to head of listint_t
 *
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nod, dex = 0;

	nod = looped_listint_len(head);
	if (nod == 0)
	{
		for (; head != NULL; nod++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (dex = 0; dex < nod; dex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nod);
}
