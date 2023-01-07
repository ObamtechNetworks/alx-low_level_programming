#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - a function taht concatenates two strings
 *
 * @dest: string destination
 * @src: string source
 * Return: 0 Always
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);
	for (i = 0; i <= len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}

