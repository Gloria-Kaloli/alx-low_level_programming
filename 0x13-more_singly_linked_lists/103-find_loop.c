#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: top loop in list
 *
 * Return: address of the node where the loop starts
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *f = head;

	if (!head)
		return (NULL);
	while (w && f && f->next)
	{
		f = f->next->next;
		w = w->next;
		if (f == w)
		{
			w = head;
			while (w != f)
			{
				w = w->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
