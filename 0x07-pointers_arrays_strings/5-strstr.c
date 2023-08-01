#include <stdio.h>

/**
 * _strstr - A fxn that locates a substring
 * @haystack: the main string to search from
 * @needle: The substring to search from
 * Description: A function that locates a substring
 * finds the first occurene of a substring neglecting the
 * NULL terminating bytes
 * Return: A pointer to the beginning of the substring or
 * NULL when no match is found
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (haystack[i] == '\0' || needle[i] == '\0')
		return (NULL);

	while (haystack[i] != '\0' && needle[i] != '\0')
	{
		if (haystack[i] == needle[i])
			return (needle);
		i++;
	}
	return (NULL);
}
