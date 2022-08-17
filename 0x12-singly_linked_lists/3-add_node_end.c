#include "lists.h"
/**
 * add_node_end - append a node to the linked list
 * @head: pointer to pointer to first element of
 * the linked list
 * @str: the string element of the node
 *
 * Return: pointer to the lat added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *end;
	int len;
	char *s;

	tail = end = malloc(sizeof(list_t));
	if (!tail)
		return (NULL);
	if (str)
		s = strdup(str), len = strlen(str);
	tail->str = s;
	tail->len = len;
	tail->next = NULL;

	if (*head == NULL)
		*head = tail;
	else
	{
		end = *head;
		while (end)
		{
			if ((end)->next == NULL)
			{
				break;
			}
			end = (end)->next;
		}
		end->next = tail;
	}

	return (tail);
}
