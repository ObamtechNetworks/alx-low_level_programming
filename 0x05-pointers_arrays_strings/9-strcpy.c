#include <stdio.h>

/**
 * _strcpy - A function that copies string from src
 * including NULL terminator to buffer pointed to by dest
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string to copy from
 * Description: A function that copies the string pointed
 * to by src inlcuding NULL terminator to buffer pointed
 * to by dest
 * Author - Ipadeola Michael Bamidele
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			dest[i] += '\0';
	}
	return (dest);
}
