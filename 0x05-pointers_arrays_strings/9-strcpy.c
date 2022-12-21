#include <stdio.h>
#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: returns string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}

	for (; x < i; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
