#include "hash_tables.h"
/**
 * shash_table_create - create a sorted hash_table like PHP does
 * @size: the size of the hash table
 *
 * Return: pointer to the newwly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = malloc(sizeof(shash_table_t *));
	unsigned int i;

	if (size <= 0 || !new)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(shash_node_t *) * ++size);
	new->shead = new->stail = NULL;

	if (new->array)
	{
		for (i = 0; i < size; i++)
			new->array[i] = NULL;
		return (new);
	}
	return (NULL);
}
/**
 * shash_table_set - place a new element in a sorted hash table
 * @ht: the hash table to insert in
 * @key: the key field of the new node
 * @value: the value field of the mew node
 *
 * Return: 1 on success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, char *key, char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t *));
	unsigned long int index;

	if (!ht || !key || !value)
		return (0);
	/* Construct a node*/
	node->key = key, node->value = value;
	node->next = NULL;

	index = hash_djb2((unsigned char *)key) % ht->size;
	if (ht->array[index])
		insert_in_linkedlist(node, &ht->array[index]);
	/* check if the hash_table is empty*/
	else if (!ht->stail)
	{
		ht->array[index] = node;
		ht->shead = ht->stail = node;
		node->snext = NULL;
		return (1);
	}
	ht->stail->snext = node;
	node->sprev = ht->stail;
	ht->stail = node;
	return (1);
}
/**
 * insert_in_linkedlist - insert in a linked list
 * @node: the node to insert in a linkedlist
 * @lst: the linked list to insert in
 */
void insert_in_linkedlist(shash_node_t *node, shash_node_t **lst)
{
	shash_node_t *tmp;

	if (node && *lst)
	{
		tmp = *lst;
		while(tmp)
		{
			if (!tmp->next)
			{
				tmp->snext = node;
				node->sprev = tmp;
			}
			tmp = tmp->next;
		}
	}
}
/**
 * shash_table_get - retreive a value from a hash table
 * @ht: the hash tablr to retrieve from
 * @key: the key to retrieve
 *
 * Return: string representing the value stores at the key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t* node;
	if (!ht && !key)
		return (NULL);
	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
/**
 * shash_table_print - print a sorted hash table
 * @ht: the pointer to the hashtable to print
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node, *next;
	if (!ht)
		return ;
	node = ht->shead;
	next = node->snext;
	printf("{");
	while (node)
	{
		if (node != ht->stail)
			printf("'%s': '%s', ", node->key, node->value);
		else
			printf("'%s': '%s'", node->key, node->value);
		node = next;
		if (next)
			next = node->next;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - print a hash_table in reverse
 * @ht: the hash_table to reverse
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail;
	if (!ht)
		return ;
	tail = ht->stail;
	printf("{");
	while(tail)
	{
		if (tail != ht->shead)
			printf("'%s': '%s', ", tail->key, tail->value);
		else
			printf("'%s': '%s'", tail->key, tail->value);
		tail = tail->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - delete the whole hash table
 * @ht: the hash_table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *lag, *lead;

	if (!ht)
		return ;
	lag = ht->shead;
	while (lag)
	{
		lead = lag->snext;
		free(lag->key), free(lag->value);
		lag = lead;
	}
	free(ht->array);
	free(ht);
}
