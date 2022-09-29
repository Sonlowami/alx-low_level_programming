#include "lists.h"
/**
 * add_dnodeint - add a node at the head of a doubly-linkedlist
 * @head: pointer to the head of the linkedlist
 * @n: the n field value of the new node
 *
 * Return: address to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t *));

	if (new)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		if (!*head)
		{
			*head = new;
			return (new);
		}

		if (!(*head)->prev)
		{
			(*head)->prev = new;
			new->next = *head;
		}
		*head = new;
		return (new);
	}
	return (NULL);
}
