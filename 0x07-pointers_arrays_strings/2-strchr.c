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
	if (*s == '\0' || c == '\0')
		return (NULL);

	while (*s != '\0')
	{
		if (*s == c) /* if character is found */
		{
			return (s); /**
					  * returns a pointer to the
					  * address of the found
					  * character
					  * (hence FIRST occurence)
					  * loop stops
					  */
		}
		s++; /** updates counter, move to next character
		       * checks condition again
		       * (if true) => performs another check on string
		       */
	}
	return (NULL); /* returns NULL if nothing was found eventually */
}
