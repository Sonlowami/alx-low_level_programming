#include "lists.h"

/**
 * check_repeat - check if a node has been printed already
 * @seen: array of pointers to encountered nodes
 * @node: the node pointer to compare
 *
 * Return: 1 if match found, 0 otherwise
 */
int check_repeat(const listint_t **seen, const listint_t *node)
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
 * print_listint_safe - print a linkedlist
 * @head: pointer to the address of the first node of the list
 *
 * Return: number of elements in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int flag, i;
	size_t count;
	const listint_t *node, *passed_nodes[200];

	if (!head)
		return (0);

	for (count = 0, i = 0, node = head; node; node = node->next)
	{
		flag = check_repeat(passed_nodes, node);
		if (flag == 0)
		{
			printf("[%p] %i\n", (void *)node, node->n);
			count++;
			if (i < 100)
			{
				passed_nodes[i] = node;
				i++;
			}
		}
		else
		{
			printf("-> [%p] %i\n", (void *)node, node->n);
			break;
		}
	}
	return (count);
}
