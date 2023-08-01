#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: The string to search from
 * @c: The character to search for
 * Description: A function that searches for the first occurence
 * of a character in a string and returns a pointer to the FIRST
 * occurrence of the character
 * Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0';)
	{
		if (s[i] == c) /* if character is found */
		{
			return (&s[i]); /**
					  * returns a pointer to the
					  * address of the character
					  * (hence FIRST occurence)
					  * loop stops
					  */
		}
		i++; /** updates counter,
		       * checks condition again
		       * (if true) => performs another check on string
		       */
	}

	return (NULL); /* returns NULL if nothing was found eventually */
}
