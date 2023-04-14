# include <stdio.h>
# include <stdlib.h>
# include "search_algos.h"
/**
 * linear_skip - run a linear search in linkedlist with reduced time complexity
 * @list: pointer to the head of the list
 * @value: the value we are looking for
 *
 * Return: pointer to a node containing the value in question, NULL otherwise
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *lead, *lag;

	if (!list)
		return (NULL);
	lead = list;
	while (lead && lead->express)
	{
		lag = lead, lead = lead->express;
		if (lead->n >= value)
		{
			for (; lag != lead; lag = lag->next)
			{
				if (lag->n == value)
					return (lag);
			}
			/* check if lead had value */
			if (lag->n == value)
				return (lag);
			return (NULL);
		}
	}
	/* This runs in case lead->express is null, but the list has more modes */
	for (; lead; lead = lead->next)
	{
		if (lead->n == value)
			return (lead);
	}
	return (NULL);
}
