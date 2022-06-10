#include "lists.h"

/**
 *print_dlistint-print all listed data or node
 *@h:head of the node
 *Return: nember of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}
	return (node);
}
