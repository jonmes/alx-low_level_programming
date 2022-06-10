#include "lists.h"

/**
 *free_dlistint- free memory leaks
 *@head:first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
