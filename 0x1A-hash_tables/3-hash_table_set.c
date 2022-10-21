#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash_table in question
 * @key: the key to map in the hash table
 * @value: the associated value of the key
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, char *key, char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t *));
	unsigned long int index;
	hash_node_t *tmp, *head;

	if (*key == '\0' || !new)
	{
		free(new);
		return (0);
	}
	new->key = key;
	new->value = value;
	new->next = NULL;
	index = hash_djb2((unsigned char *)key) % ht->size;

	head = (ht->array)[index];
	if (!head)
	{
		ht->array[index] = new;
		return (1);
	}
	tmp = head->next;
	while (tmp)
	{
		if (!tmp->next)
			tmp->next = new;
		tmp = tmp->next;
	}
	return (1);
}
