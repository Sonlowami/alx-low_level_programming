#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: pointer to the first address of the singly linked list
 *
 * Return: head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_a, *node_b;

	if (!(*head))
		return (NULL);
	node_a = (*head)->next;
	(*head)->next = NULL;
	while (node_a)
	{
		node_b = node_a->next;
		node_a->next = *head;

		*head = node_a;
		node_a = node_b;
	}
	return (*head);
}
