#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat - dynamically creates a function that concatenate two strings
 * @s1: destination string
 * @s2: the source string
 * Description: A function that dyanmically concatenates two strings
 *
 * Return: NULL if size is 0, else a pointer to the array
 */
char *str_concat(char *s1, char *s2)
{
	/*int size;*/
	int len1 = 0, len2 = 0;
	int i, j;
	char *join;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	/*size = len1 + len2 + 1; */
	/* enough size to contain s1 and s2 */
	join = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	/* handle malloc return */
	if (join == NULL)
	{
		return (NULL);
	}

	/*fill values of s1 and s2 into ptr_join accordingly*/
	for (i = 0; i < len1; i++)
		join[i] = s1[i];

	for (j = 0; j < len2; j++)
		join[len1 + j] = s2[j];

	/*return null pointer to end of joined string */
	join[len1 + len2] = '\0';
	return (join);
}
