#include "lists.h"

/**
 * add_nodeint - add a node to alinked list of ints
 * @head :pointer to pointer of the head node
 * @n: the n field of the next node
 *
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (*head);
}
