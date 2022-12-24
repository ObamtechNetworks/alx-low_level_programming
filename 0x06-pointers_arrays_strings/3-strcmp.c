#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - a function that compares two strings
 * @dest: string destination
 * @src: string source
 * Return: 0 Always
 */
char *_strcat(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++
		s2++;
	}
	return (*s1 - *s2);
}

