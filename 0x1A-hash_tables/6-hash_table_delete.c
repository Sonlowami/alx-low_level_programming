#include "hash_tables.h"

void free_linkedlist(hash_node_t **lst);
/**
 * hash_table_delete - delete the entire data structure
 * @ht: the hash table to erase
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;

	if (!ht)
		return ;
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (tmp && !tmp->next)
		{
			free(tmp);
			continue;
		}
		else if (tmp && tmp->next)
			free_linkedlist(&tmp);
	}
	free(ht->array);
	free(ht);
}
/**
 * free_linkedlist - free a singly linked list
 * @lst: the list to free
 */
void free_linkedlist(hash_node_t **lst)
{
	hash_node_t *tmp, *node;

	node = *lst;
	while (node)
	{
		tmp = (node)->next;
		free(node);
		node = tmp;
	}
}
