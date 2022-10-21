#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    int res;

    ht = hash_table_create(1024);
    res = hash_table_set(ht, "betty", "cool");
    if (res) printf("Returned 1");
    else
	    printf("---");
    res = hash_table_set(ht, "stylist", "Collision");
    if (res) printf("Returned 1");
    else
	    printf("---");
    res = hash_table_set(ht, "subgenera", "here");
    if (res) printf("Returned 1");
    else
	    printf("---");
    res = hash_table_set(ht, "C is cool", "I like it");
    if (res) printf("Returned 1");
    else
	    printf("---");
    res = hash_table_set(ht, "", "cool");
    if (res) printf("Returned 1");
    else
	    printf("---");
    res = hash_table_set(ht, "Love", "");
    if (res) printf("Returned 1");
    else
	    printf("---");
    printf("\nstylist: %lu, subgenera: %lu\n", hash_djb2((unsigned char *)"stylist") %1024, hash_djb2((unsigned char *)"subgenera") % 1024);
    return (EXIT_SUCCESS);
}
