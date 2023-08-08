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
	int size = (strlen(s1) + strlen(s2)) + 1;
	char *ptr_join;
	/* enough size to contain s1 and s2 */
	char *joined = malloc(size * sizeof(char));

	if (s1 == NULL)
		/* if any of them is NULL reassign them as empty strings*/
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* handle malloc return */
	if (joined == NULL)
	{
		return (NULL);
		exit(1);
	}
	/**
	 * create a pointer to joined, so as to keep track of concatenation
	 * and also manipulate values directly
	 */
	ptr_join = joined;
	/*fill values of s1 and s2 into ptr_join accordingly*/
	while (*s1 != '\0')
	{
		/*character at s1 is stored in ptr_join*/
		*ptr_join = *s1;
		ptr_join++;
		s1++;
	}
	while (*s2 != '\0')
	{
		/*start filling in from the current position of ptr and s2*/
		*ptr_join = *s2;
		ptr_join++;
		s2++;
	}
	/*return null pointer to end of joined string */
	*ptr_join = '\0';
	return (joined);
}
