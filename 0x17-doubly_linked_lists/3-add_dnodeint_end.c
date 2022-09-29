#include "lists.h"
/**
 * add_dnodeint_end - add a node to the end of a doubly linked list
 * @head: pointer to the head of the linked list
 * @n: the n field of the new node
 *
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new = malloc(sizeof(dlistint_t *));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->prev = NULL, new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	node = *head;
	while (node)
	{
		if (!node->next)
		{
			node->next = new;
			new->prev = node;
			return (new);
		}
		node = node->next;
	}
	return (NULL);
}
