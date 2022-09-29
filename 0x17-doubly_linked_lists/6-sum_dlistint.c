#include "lists.h"
/**
 * sum_dlistint - sum all n fields of a doubly linkedlist
 * @head: the beginning of a doubly linkedlist
 *
 * Return: integer sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
