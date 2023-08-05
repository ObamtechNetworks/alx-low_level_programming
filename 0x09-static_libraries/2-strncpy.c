#include <stdio.h>
#include <string.h>

/**
 * _strncpy - A function that copies a strings
 * @dest: pointer to the destination of copied string
 * @src: pointer to the source string to copy from
 * @n: the number of bytes (characters) to copy
 * Description: A function that copies a string
 * using at most n bytes from the source string and
 * then returns a pointer to the copied destination string
 * Author - Ipadeola Michael Bamidele
 * Return: Destination String
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
