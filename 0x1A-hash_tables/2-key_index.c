#include "hash_tables.h"
/**
 * key_index - this function returns the index of a key (that has been hashed)
 * @key: the key to get its index
 * @size: the size of the array of the hash table
 * Return: returns the index at which the key/value pair should be in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/*create a placeholder for the index to compute*/
	unsigned long int index = 0;
	unsigned long int hash = -1; /*placeholder for hash*/

	/*verify if the key is valid*/
	if (!key || !size)
	{
		return (-1);
	}

	/*calculate the index, call the hash fxn to calculate hash*/
	hash = hash_djb2((const unsigned char *)key);

	/*compute index by doing modulo of the table size*/
	index = hash % size;

	/*return the computed index*/
	return (index);
}
