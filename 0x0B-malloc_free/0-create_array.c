#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - dynamically creates an array and allocate size to it
 * @size: the size of the array to be dynamically allocated
 * @c: the character to fill in the array
 * Description: A function that dyanmically creates an array and fills it up
 *
 * Return: NULL if size is 0, else a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *charAr = malloc(size * sizeof(char));
	
	/*handle malloc return if size is NULL */
	if (size == 0)
	{
		return (NULL);
		exit(1);
	}
	while (i < size)
	{
		*(charAr + i) = c;
		i++;
	}
	return (charAr);
}
