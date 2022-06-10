#include "lists.h"
/**
 *dlistint_len- print length of node
 *@h:first node
 *Return: len of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
