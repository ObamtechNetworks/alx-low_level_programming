#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table based on given size
 * @size: the size of the table to create
 * Return: the created hash table or NULL if creation failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0; /* for createing the no of buckets*/
	/* create the a pointer to hold the table */
	hash_table_t *new_table = NULL;

	/*check if size is valid*/
	if (!size)
	{
		return (NULL);
	}
	/* allocate space in memory for the new_table*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL) /* check malloc return*/
	{
		return (NULL);
	}

	/* set size of new table to be the given size */
	new_table->size = size;

	/* allocate memory for individual table array*/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	/*initialize each individual array to NULL */
	for (i = 0; i < size; ++i)
	{
		new_table->array[i] = NULL;
	}

	/* return the new table */
	return (new_table);
}
