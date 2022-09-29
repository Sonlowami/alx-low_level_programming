#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: pointer to the head of the linkedlist
 * @idx: the index to put node in
 * @n: the n field of the linked list
 *
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp;
	unsigned int count;

	if (!h)
		return (NULL);
	tmp = malloc(sizeof(dlistint_t *));
	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	tmp->prev = NULL;

	if (!*h)
	{
		*h = tmp;
		return (tmp);
	}
	for (node = *h, count = 0; node; node = node->next, count++)
	{
		if (count == idx - 1)
		{
			tmp->next = node->next;
			if (node->next)
				node->next->prev = tmp;
			tmp->prev = node;
			node->next = tmp;
			return (tmp);
		}
		if (idx == 0)
		{
			tmp->next = node;
			node->prev = tmp;
			*h = tmp;
			return (tmp);
		}
	}
	free(tmp);
	return (NULL);
}
