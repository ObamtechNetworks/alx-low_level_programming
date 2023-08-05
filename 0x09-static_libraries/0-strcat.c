#include <stdio.h>
#include <string.h>

/**
 * _strcat - A function that concatenates two strings
 * @dest: pointer to the destination of concatenated strings
 * @src: pointer to the source string to concatenate
 * Description: A function that concatenates two strings and
 * then returns a pointer to the concated destination string
 * Author - Ipadeola Michael Bamidele
 * Return: Destination String
 */

char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int i = 0;

	while (src[i] != '\0')
	{
		dest[length + i] = src[i];
		i++;
	}
	return (dest);
}
