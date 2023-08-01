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
	char *ptr_hay, *ptr_needle;

	if (!(*needle))
	{
		return haystack;
	}

	while (*haystack)
	{
		ptr_hay = haystack;
		ptr_needle = needle;
		
		while (*ptr_needle && *ptr_hay == *ptr_needle)
		{
			ptr_hay++;
			ptr_needle++;
		}
		if (!(*ptr_needle))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
