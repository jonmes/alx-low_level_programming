#include "lists.h"

/**
 *sum_dlistint- print the sum of all given node
 *@head: root node of list
 *Return: sum of node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}

	return (sum);
}
