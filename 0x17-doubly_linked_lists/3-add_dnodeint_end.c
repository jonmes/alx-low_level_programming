#include "lists.h"

/**
 *add_dnodeint_end- add new node at the end of the sata
 *@head:first nod
 *@n: new node data
 *Return: NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		(*head) = new;
		return (new);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new;
	new->prev = current;

	return (new);
}
