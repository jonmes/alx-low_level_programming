#include "lists.h"

/**
 *insert_dnodeint_at_index- insert at a given node
 *@idx: index the given data can be inserted
 *@h: first node
 *@n:new data can be inserted
 *Return: null the file can be failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *current;

	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = (*h);
	for (i = 0; i < idx && current; i++)
	{
		if (i == idx - 1)
		{
			if (current->next == NULL)
				return (add_dnodeint_end(h, n));

			new->prev = current;
			new->next = current->next;
			current->next->prev = new;
			current->next = new;

			return (new);
		}
		else
			current = current->next;
	}

	return (NULL);
}
