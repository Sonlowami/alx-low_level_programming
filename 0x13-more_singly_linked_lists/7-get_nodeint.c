#include "lists.h"

/**
 * get_nodeint_at_index - get the node at a particular index
 * @head: pointer to the start of the array
 * @index: the position in the array that we want to get
 *
 * Return: pointer to the node, or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *node;

	if (!head)
		return (NULL);
	for (n = 0, node = head; node; node = node->next, n++)
	{
		if (n == index)
			return (node);
	}
	return (NULL);
}
