#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - a function taht concatenates a certain part of two strings
 *
 * @dest: string destination
 * @src: string source
 * @n number of bytes to collect
 * Return: 0 Always
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= n; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

