#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * @head: beginning of the linkedlist
 * @index: position of the node to delete
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp;
	unsigned int count;

	if (!head || !*head)
		return (-1);
	for (count = 0, node = *head; node; node = node->next, count++)
	{
		if (count == index)
		{
			tmp =  node->next;
			if (index > 0)
			{
				node->prev->next = tmp;
				tmp->prev = node->prev;
			}

			node->next = NULL;
			node->prev = NULL;
			free(node);
			if (index == 0)
				*head = tmp;
			return (1);
		}
	}
	return (-1);
}



