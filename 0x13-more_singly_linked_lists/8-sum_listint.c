#include "lists.h"

/**
 * sum_listint - sum all n fields of nodes in a linkedlist
 * @head: pointer to the first node in the linkedlist
 *
 * Return: 0 for an empty list, sum for the rest
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	if (!head)
		return (0);
	for (sum = 0, node = head; node; node = node->next)
		sum += node->n;
	return (sum);
}
