#include "hash_tables.h"
/**
 * hash_table_print - print a hash table's key, value pairs
 * @ht: the hash table to print
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i, count;

	if (!ht)
		return;
	printf("{");
	for (i = 0, count = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		if (!tmp)
			continue;
		else
		{
			if (!count)
				printf("'%s': '%s'", tmp->key, tmp->value);
			else
				printf(", '%s': '%s'", tmp->key, tmp->value);
			count++;
			tmp = tmp->next;
		}
		while (tmp)
		{
			printf(", '%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}

