#include "hash_tables.h"
/**
 * hash_table_get - retrieves the value associated with a key
 * @ht: the key/value node (bucket) in the table
 * @key: the key to find its value
 * Return: returns the value associated with element, NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current = NULL; /*ptr to the cur key/value node(bucket)*/
	unsigned long int index = 0; /*to get index of key*/
	/*check if arguments are valid*/
	if (!ht || !key || strlen(key) == 0)
	{
		return (NULL);
	}
	/*get the index of the key*/
	index = key_index((const unsigned char *)key, ht->size);
	/*set current key/value to be created table by user*/
	current = ht->array[index];

	/*traverse to see if there are collided keys and get their values*/
	while (current != NULL)
	{
		/*compare key at every position*/
		if (strcmp(current->key, key) == 0)
			return (current->value);
		/*else check the next node*/
		current = current->next;
	}
	/*if key does not exist*/
	return (NULL);
}
