#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: pointer to the first address of the linked list
 * @index: thw position of the item to pull out
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *node_b;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		node = (*head)->next;
		(*head)->next = NULL;
		free(*head);
		*head = NULL;
		*head = node;
		return (1);
	}
	for (node = *head, i = 0; node; node = node->next, i++)
	{
		if (i + 1 == index)
		{
			node_b = node->next;
			node->next = node_b->next;
			node_b->next = NULL;
			free(node_b);
			node_b = NULL;
			return (1);
		}
	}
	return (-1);
}
