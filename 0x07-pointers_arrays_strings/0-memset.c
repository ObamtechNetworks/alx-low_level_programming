#include <stdio.h>

/**
 * _memset - A function that fills memory with a constant byte
 * @s: The destination memory location to fill
 * @b: The constant character to fill the memory
 * @n: The most n bytes of characters to fill in
 * Description: A function that fills memory with a constant byte
 * Return: a pointer to the memory area *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
