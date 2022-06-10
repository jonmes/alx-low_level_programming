#include "lists.h"

/**
 *get_dnodeint_at_index- find and print the node at given index
 *@head: frist node
 *@index: given index
 *Return: failed to NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;


	if (head == NULL)
		return (NULL);

	current = head;

	i = 0;
	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
