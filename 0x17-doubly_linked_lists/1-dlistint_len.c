#include "lists.h"
/**
 * dlistint_len - print the length of a linkedlist
 * @h: pointer to the head of the linked list
 *
 * Return: number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

