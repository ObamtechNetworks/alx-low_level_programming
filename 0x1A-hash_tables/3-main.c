#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int index = -1, index2, index3;
    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    
    /*test collision*/
    hash_table_set(ht, "hetairas", "collide");
    hash_table_set(ht, "mentioner", "collide again");
    index = key_index((const unsigned char *)"betty", ht->size);
    index2 = key_index((const unsigned char *)"mentioner", ht->size);
    index3 = key_index((const unsigned char *)"hetairas", ht->size);
    printf("key: %s, value: %s\n", (ht->array[index])->key, (ht->array[index])->value);
    printf("key: %s, value: %s\n", (ht->array[index2])->key, (ht->array[index2])->value);
    printf("key: %s, value: %s\n", (ht->array[index3])->next->key, (ht->array[index3])->next->value);
    return (EXIT_SUCCESS);
}
