#include "hash_tables.h"
/**
 * hash_table_print - prints an entire hash table
 * @ht: the hasht table bucket (node's key/value pair) to print it's value
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	/*variables to iterate through buckets*/
	unsigned long int i = 0;
	unsigned long int is_printed = 0;/*flag to mark that a node isprinted*/
	hash_node_t *node = NULL;/*indicate each array bucket*/

	/*check if argument is valid*/
	if (ht == NULL)
	{
		return;
	}
	printf("{");/*prints the open brace*/
	/*itreate through the buckets based on size of the table*/
	for (i = 0; i < ht->size; i++)
	{
		/*get first node (first bucket)*/
		node = ht->array[i];
		/*loop through node, incase of chaining to print ele*/
		while (node != NULL)
		{
			/*check if first pair has been printed*/
			if (is_printed)
			{
				printf(",");/*separates pairs*/
			}
			/*else print the pair at that bucket/node*/
			printf("'%s': '%s'", node->key, node->value);
			/*set flag that it is printed*/
			is_printed = 1;
			node = node->next; /*check for chaining*/
		}
	}
	printf("}\n"); /*clos the curly brace with new line*/
}
