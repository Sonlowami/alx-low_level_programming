# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include "search_algos.h"

/**
 * jump_list - jump searcch through a singly linkedlist
 * @list: pointer to the start of the list
 * @size:the number of nodes in the list
 * @value: the item to search for
 *
 * Return: pointer to the item in the list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, target;
	listint_t *lead, *lag;

	if (!list || !size)
		return (NULL);
	jump = sqrt(size);
	target = list->index + jump;
	lead = list;
	while (target <= size)
	{
		if (target == size)
			target = size - 1;

		lag = lead;
		while (lead->index < target)
			lead = lead->next;
		printf("Value checked at index [%ld] = [%d]\n", lead->index, lead->n);
		if (lead->n == value)
			return (lead);
		else if (lead->n < value)
			target = jump + lead->index;
		else if (lead->n > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					lag->index, lead->index);
			for (; lag != lead; lag = lag->next)
			{
				if (lag->n == value)
					return (lag);
			}
			break;
		}
	}
	return (NULL);
}
