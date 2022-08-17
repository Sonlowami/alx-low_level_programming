#include "lists.h"
/**
 * add_node - add a new node at the beginning of the list
 * @head: pointer to the linkedlist
 * @str: pointerto the stringcomponent of the node
 *
 * Return: address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t i;
	char *s = strdup(str);
	list_t *list = malloc(sizeof(list_t));

	if (!s)
		return (NULL);
	i = strlen(s);

	list->str = s;
	list->len = i;
	list->next = *head;

	*head = list;
	return (*head);
}
