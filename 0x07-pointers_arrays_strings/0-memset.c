#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: the pointer to the memory area to be filled
 * @b: the character to fill
 * @n: the number of bytes to be filled
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	unsigned char *mem = s, value = b;

	for (i = 0; i < n; i++)
		mem[i] - value;
	return (mem);
}
