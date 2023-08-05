#include <stdio.h>
#include <string.h>

/**
 * _strncat - A function that concatenates two strings
 * @dest: pointer to the destination of concatenated strings
 * @src: pointer to the source string to concatenate
 * @n: the number of bytes (characters) to concatenate
 * Description: A function that concatenates two strings
 * using at most n bytes from the source stringand
 * then returns a pointer to the concated destination string
 * Author - Ipadeola Michael Bamidele
 * Return: Destination String
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';

	return (dest);
}
