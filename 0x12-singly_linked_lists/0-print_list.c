#include "lists.h"
/**
 * print_list - print all items in a singly linked list
 * @h: th epointer to the first item of the linked list
 *
 * Return: number of items in the linked list
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *p = h;

	i = 0;
	while (p)
	{
		if (!(p->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", p->len, p->str);
		i++;
		p = p->next;
	}
	return (i);
}

