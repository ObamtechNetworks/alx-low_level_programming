#include <stdio.h>
#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: the destination of the memory area
 * @src: the source of the memory area
 * @n: the integer value
 * Return: a pointer to the desterination buffer @ dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	for (i = 0; i < n; i++)
		cdest[i] = csrc[i];
	return (dest);
}
