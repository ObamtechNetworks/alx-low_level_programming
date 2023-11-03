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
    unsigned long int index = -1;
    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    index = key_index((const unsigned char *)"betty", ht->size);
    printf("key: %s, value: %s", (ht->array[index])->key, (ht->array[index])->value);
    return (EXIT_SUCCESS);
}
