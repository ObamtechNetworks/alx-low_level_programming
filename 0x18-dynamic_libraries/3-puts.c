#include <stdio.h>
#include "main.h"

/**
 * _puts - A function that prints a string followed by a new line
 * @str: a pointer to the string of characters to print
 * Description: A function that prints a string
 * followed by a new line to stdout
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar(10);
}
