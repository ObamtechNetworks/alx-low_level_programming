#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - creates a pointer to a newly allocated space in memory
 * @str: the string to create a copy  of it in memory
 * Description: A function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as parameter
 *
 * Return: NULL if str = NULL, else pointer to the new space
 */
char *_strdup(char *str)
{
	/* get size of str */
	unsigned int size = strlen(str) + 1;
	/*allocate memory to duplicate str */
	char *dup = malloc(size * sizeof(char));

	/*handle malloc return if charAr is NULL */
	if (dup == NULL)
	{
		return (NULL);
		exit(1);
	}
	/*care for when str == NULL */
	if (str == NULL)
	{
		return (NULL);
	}
	/*copy contents of str into new space */
	strcpy(dup, str);
	return (dup);
}
