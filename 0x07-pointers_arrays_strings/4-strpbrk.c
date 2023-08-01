#include <stdio.h>

/**
 * _strpbrk - A fxn that searches a string for any set of bytes
 * @s: The string to search from
 * @accept: The substring prefix to search
 * Description: A function that searches a string for
 * any of a set of bytes in a substring from a main string
 * Return: A pointer to the byte in s that matches the bytes
 * in the substring (accept) or NULL when there's no match
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptrAccept;

	while (*s != '\0')
	{
		ptrAccept = accept;

		while (*ptrAccept != '\0')
		{
			if (*s == *ptrAccept)
				return (s);
			ptrAccept++;
		}
		s++;
	}
	return (NULL);
}
