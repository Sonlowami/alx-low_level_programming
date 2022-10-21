#include "hash_tables.h"
/**
 * key_index - find the index of a key in a hash_table
 * @key: the key in question
 * @size: size of the hash_table array
 *
 * Return: the index thekey should have in a hash_table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
