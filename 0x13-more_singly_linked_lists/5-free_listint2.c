#include "lists.h"

/**
 * free_listint2 - deallocate memory previously allocated
 * to a singly linked list items
 * @head: pointer to the singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node_a, *node_b;

	node_a = *head;
	while (node_a)
	{
		node_b = node_a->next;
		free(node_a);
		node_a = NULL;
		node_a = node_b;
	}
	*head = NULL;
}
