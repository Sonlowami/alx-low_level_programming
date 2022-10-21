#include "hash_tables.h"
/**
 * hash_table_create - creates a hash_table
 * @size: the size of the hash table
 *
 * Return: pointer to the first element of the hashtable
 *	NULL, if creating a hash_table failed.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	new = malloc(sizeof(hash_table_t *));
	if (!new)
		return (NULL);
	if (size > 0)
	{
		new->size = size;
		new->array = malloc(sizeof(hash_node_t *) * size);
		if (new->array)
			return (new);
	}
	free(new);
	return (NULL);
}

