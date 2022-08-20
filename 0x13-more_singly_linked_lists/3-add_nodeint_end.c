#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: pointer to the linked list
 * @n: the input for new node's n field
 *
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *other;

	node = other = malloc(sizeof(listint_t));
	if (!node || !other)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (!(*head))
		*head = node;
	else
	{
		for (other = *head; other != NULL; other = other->next)
		{
			if (!other->next)
			{
				other->next = node;
				break;
			}
		}
	}
	return (node);
}

