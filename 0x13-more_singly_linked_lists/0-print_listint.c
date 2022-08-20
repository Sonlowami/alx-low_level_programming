#include "lists.h"

/**
 * print_listint - print all integers in a linkedlist of ints
 * @h: pointer to the first node in the list
 *
 * Return: number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}

