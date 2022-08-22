#include "lists.h"

/**
 * find_listint_loop - find the start of s circular process in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: pointer to the start of the cycle
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node_a, *node_b;

	node_a = head;
	while (node_a)
	{
		node_b = node_a->next;
		if (node_b == head)
			return (node_b);
		node_a = node_b;
	}
	return (NULL);
}
