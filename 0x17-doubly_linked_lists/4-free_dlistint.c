#include "lists.h"
/**
 * free_dlistint - free a doubly linkedlist
 * @head: pointer to the beginning of the linkedlist
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (!head)
		exit(0);
	node = head->next;
	while (node && node->next)
	{
		free(node->prev);
		node = node->next;
	}
	free(node->prev);
	free(node);
}
