#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at an index in a singly linked list
 * @head: pointer to address of first node
 * @idx: the index of the node, starting from 0
 * @n: the value of the n field of the new node
 *
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *node_a, *node_b;

	if (!(*head))
		return (NULL);
	node_a = malloc(sizeof(listint_t));
	if (!node_a)
		return (NULL);
	node_a->n = n;
	node_a->next = NULL;

	for (i = 0, node_b = *head; node_b; i++, node_b = node_b->next)
	{
		if (i + 1 == idx)
		{
			node_a->next = node_b->next;
			node_b->next = node_a;
			return (node_a);
		}
	}
	return (NULL);
}
