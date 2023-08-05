#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_rev - A function that prints a string in reverse
 * @s: a pointer to the string of characters to print
 * Description: A function that prints a string in reverse
 * order followed by a new line
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (s[i] > '\0')
	{
		_putchar(s[i]);
		i--;
	}

	_putchar(10);
}
