#include <stdio.h>

/**
 * _memcpy - A function that copies a memory area
 * @dest: The destination memory location to copy to
 * @src: The memory source to copy from
 * @n: The most n bytes of characters to copy
 * Description: A function that copies a memory area
 * from source to destination based on given n bytes to copy
 * Return: a pointer to the memory area *s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
