#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - a function taht concatenates a certain part of two strings
 *
 * @dest: string destination
 * @src: string source
 * @n: number of bytes to collect
 * Return: 0 Always
 */
char *_strncat(char *dest, char *src, int n)
{
	if ((dest == NULL) && (src == NULL))
		return NULL;
	char *s1 = dest;
	while (*s1 != '\0')
	{
		s1++;
	}
	while (n--)
	{
		if (!(*s1++ == *src++))
			return dest;
	}
	*s1 = '\0';
	return (dest);
}

