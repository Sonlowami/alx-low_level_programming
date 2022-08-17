#include "lists.h"
/**
 * list_len - find the length of a linked list
 * @h: pointer to the first node of the linked list
 *
 * Return: the length of the linked list
 */
size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
