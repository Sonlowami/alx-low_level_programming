#include "hash_tables.h"
/**
 * hash_table_get - get an element at index
 * @ht: the hashtable to look into
 * @key: the key to look for in the hash_table
 *
 * Return: the value associated with the key, NULL if nothing found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *get;

	if (!ht || !key || *key == '\0')
		return (NULL);
	index = hash_djb2((unsigned char *)key) % ht->size;
	if (ht->array[index] == NULL)
		return (NULL);
	if (strcmp(key, ht->array[index]->key) == 0)
		return (ht->array[index]->value);

	get = ht->array[index];
	while (get)
	{
		if (strcmp(get->key, key) == 0)
			return (get->value);
		get = get->next;
	}
	return (NULL);
}
