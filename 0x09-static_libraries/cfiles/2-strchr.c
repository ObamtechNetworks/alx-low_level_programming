#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string to search
 * @c: the character to locate
 * Return: if c is found - a pointer to the first occurrence else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
