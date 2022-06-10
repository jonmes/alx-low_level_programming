#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *add_dnodeint- add new node at the begging of node
 *@head:first node
 *@n: new node value
 *Return: NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (0);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	new->next = (*head);
	if (*head)
		(*head)->prev = new;

	(*head) = new;

	return (new);
}

