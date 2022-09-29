#include "lists.h"

/**
 * dlistint_ln - print the length of a linkedlist
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements in a linked list
 */
size_t dlistint_ln(dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

/**
 * get_dnodeint_at_index - find the mode at a certain position
 * @head: start of the linkedlist
 * @index: position of the node in question
 *
 * Return: pointer to that node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t max_count, count;
	dlistint_t *node;

	max_count = dlistint_ln(head);
	if (max_count < index || (!head))
		return (NULL);
	for (count = 0, node = head; count < max_count; count++)
	{
		if (count == index)
			return (node);
		node = node->next;
	}
	return (NULL);
}
