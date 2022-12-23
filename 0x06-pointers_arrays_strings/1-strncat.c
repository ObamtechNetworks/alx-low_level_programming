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
	int i = 0, lenDest = 0;

	while (dest[i++])
		lenDest++;
	for (i = 0; src[i] && i < n; i++)
		dest[lenDest++] = src[i];
	return (dest);
}

