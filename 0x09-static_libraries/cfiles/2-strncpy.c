#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - a function that copys strings with specified amount of character
 *
 * @dest: string destination
 * @src: string sourcei
 * @n: the max number of bytes to copy from src
 * Return: 0 Always
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcLen = 0;

	while (src[i++])
		srcLen++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = srcLen; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

