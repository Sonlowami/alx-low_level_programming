#include "lists.h"

/**
 * listint_len - count the number of items in  in a singly linked list
 * @h: pointer to the first node in the list
 *
 * Return: number of elements contained in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}

