#include "lists.h"
/**
 * print_dlistint - print elements of a doubly linkedlist
 * @h: the head of the linked list
 *
 * Return: number of items in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);

}
