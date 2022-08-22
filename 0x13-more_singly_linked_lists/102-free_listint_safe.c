#include "lists.h"

/**
 * check_repeat2 - check if a node has been printed already
 * @seen: array of pointers to encountered nodes
 * @node: the node pointer to compare
 *
 * Return: 1 if match found, 0 otherwise
 */
int check_repeat2(listint_t **seen, listint_t *node)
{
	int i;

	for (i = 0; seen[i]; i++)
	{
		if (seen[i] == node)
			return (1);
		seen++;
	}
	return (0);
}
/**
 * free_listint_safe - free a linkedlist with circular elements
 * @h: pointer to the address if the first node
 *
 * Return: number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	int flag, i;
	size_t count;
	listint_t *node, *node_b, *seen_nodes[150];

	if (!h)
		return (0);
	for (count = 0, i = 0, node = *h; node; node = node_b)
	{
		flag = check_repeat2(seen_nodes, node);
		if (!flag)
		{
			node_b = node->next;
			seen_nodes[i] = node;
			free(node);
			node = NULL;
			i++;
			count++;

		}
		else
		{
			break;
		}
		*h = NULL;
	}
	return (count);
}
