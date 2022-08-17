#include "lists.h"
/**
 * free_list - free memory allocated to nodes
 * of a linked list
 * @head: pointer to the start of the list
 */
void free_list(list_t *head)
{
	list_t *next, *node;

	node = head;
	while (node)
	{
		next = node->next;

		free(node->str);
		free(node);
		node = NULL;
		node = next;
	}
}
