#include "hash_tables.h"
/**
 * create_pair - creates a new key value pair node
 * @key: the key to store in node
 * @value: the value of the key
 * Return: new pair, else NULL for failure
 */
hash_node_t *create_pair(const char *key, const char *value)
{
	hash_node_t *new_pair = NULL;

	if (!key || !value)
	{
		return (NULL);
	}
	/*alloc. memory for key_value pair*/
	new_pair = malloc(sizeof(hash_node_t));
	if (new_pair == NULL)
		return (NULL);
	new_pair->key = strdup(key);
	if (new_pair->key == NULL)
	{
		free(new_pair);
		return (NULL);
	}
	new_pair->value = strdup(value);
	if (new_pair->value == NULL)
	{
		free(new_pair->key);
		free(new_pair);
		return (NULL);
	}
	new_pair->next = NULL; /*set next of new_pair*/

	return (new_pair);
}
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to update (add) its key/value
 * @key: the key to add NB: cannot be an empty string
 * @value: the value associated with the key: can be an empty str
 * Return: 1 if succeeded, 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* variable to hold index of table*/
	unsigned long int index = -1;
	/*create ptr for node with key_value pair, also current to ptr to loop*/
	hash_node_t *new_pair = NULL, *current = NULL;
	/*check if key is valid*/
	if (!key || !value)
	{
		if (new_pair != NULL)
		{
			free(new_pair->key);
			free(new_pair->value);
			free(new_pair);
		}
		return (0);
	}
	/* create key value pair*/
	new_pair = create_pair(key, value);
	if (new_pair == NULL)
	{
		return (0);
	}
	/*get key index */
	index = key_index((const unsigned char *)key, ht->size);
	/*set value into table if the position is NULL*/
	if (ht->array[index] == NULL)
	{ /*there's no collision, sets value easily*/
		ht->array[index] = new_pair;
	}
	else
	{ /*there's a collision, enter thru table and set at next*/
		current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_pair;

	}
	return (1); /*for success */
}
