#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the prefix to be measured
 * Return: the number of bytes in s which consists only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
