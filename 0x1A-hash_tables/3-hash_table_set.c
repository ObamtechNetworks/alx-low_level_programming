#include "hash_tables.h"
/**
 * create_pair - creates a new key value pair node
 * @key: the key to store in node, cannot be an empty str
 * @value: the value of the key
 * Return: new pair, else NULL for failure
 */
hash_node_t *create_pair(const char *key, const char *value)
{
	hash_node_t *new_pair = NULL;

	if (!key || !value || strlen(key) == 0)
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
	unsigned long int index = 0;
	/*create ptr for node with key_value pair, also curr to ptr to loop*/
	hash_node_t *new_pair = NULL, *curr = NULL;
	/*check if arguments are valid*/
	if (!ht || !key || !value || strlen(key) == 0)
		return (0);
	/* create key value pair*/
	new_pair = create_pair(key, value);
	if (new_pair == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size); /*get index*/
	/*set value into table if the position is NULL*/
	if (ht->array[index] == NULL)
		ht->array[index] = new_pair; /*NO COLLISION*/
	else
	{ /*there's a collision, search thru and check if key exists*/
		curr = ht->array[index];
		for (; curr != NULL; curr = curr->next)
		{
			if (strcmp(curr->key, key) == 0)
			{
				free(curr->value);
				curr->value = strdup(value);
				if (curr->value == NULL)
				{
					free(new_pair->key);
					free(new_pair->value);
					free(new_pair);
					return (0);/*mem alloc error*/
				}
				free(new_pair->key);
				free(new_pair->value);
				free(new_pair); /*free as its no more needed*/
				return (1);
			}
		} /*if its a complet. new key, add at beg of list*/
		new_pair->next = ht->array[index];
		ht->array[index] = new_pair;
	}
	return (1); /*for success */
}
