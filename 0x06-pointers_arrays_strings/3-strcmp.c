#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - a function that compares two strings
 * @dest: string destination
 * @src: string source
 * Return: 0 Always
 */
char *_strcat(char *dest, char *src)
{
	int i, flag = 0;

	for (i = 0; dest[i] != '\0' || src[i] != '\0'; i++)
	{
		if (dest[i] != src[i])
		{
			break;
		}
		else
		{
			return 0;
			continue;
		}
	}
}

