#include "hash_tables.h"

/**
 * hash_djb2 -  this function is used to generate hash values for strings.
 * @str: the string to generate its hash value
 * Description: It takes a string as input, represented by the parameter str.
 * The string is expected to be an array of unsigned characters.
 * The function initializes a variable hash to the initial value of 5381.
 * This value is an arbitrary starting point for the hash calculation.
 * The function iterates through each character of the input strin
 * using a while loop and assigns it to the variable c.
 * Return: returns the generated hashed value
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
