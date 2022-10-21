#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *res;

    char *key, *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "stylist", "Collision");
    hash_table_set(ht, "subgenera", "here");
    hash_table_set(ht, "C is cool", "I like it");
    hash_table_set(ht, "", "cool");
    hash_table_set(ht, "Love", "");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    free(key);
    free(value);
    hash_table_print(ht);
    res = find(ht, "subgenera");
    if (res)
    	printf("Found: %s: %s", res->key, res->value);
    else
	    printf("found nothing");
    printf("\nstylist: %lu, subgenera: %lu\n", hash_djb2((unsigned char *)"stylist") %1024, hash_djb2((unsigned char *)"subgenera") % 1024);
    return (EXIT_SUCCESS);
}
