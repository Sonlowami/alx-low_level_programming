#include "lists.h"

/**
 * pop_listint - remove the head of a list
 * @head: pointer to the linkedlist
 *
 * Return: int in field n of the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node_b;

	if (!(*head))
		return (0);
	node_b = (*head)->next;
	n = (*head)->n;
	(*head)->next = NULL;

	free(*head);
	*head = NULL;
	*head = node_b;

	return (n);
}
