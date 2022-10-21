#include "hash_tables.h"
/**
 * find - find one item in a hash table
 * @ht: the hash_table in question
 * @key: the key to find
 *
 * Return: the key-value pair in for the key
 */
hash_node_t *find(hash_table_t *ht, const char *key)
{
	int hash_value;
	hash_node_t *tmp;

	if (!ht ||  !key)
		return (NULL);
	hash_value = hash_djb2((unsigned char *) key) % ht->size;

	tmp = ht->array[hash_value];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
