#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - A function that prints half of a string
 * @str: a pointer to the string of characters to print
 * Description: A function that prints half of a string
 * followed by a new line
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void puts_half(char *str)
{
	unsigned int i;

	if (strlen(str) % 2 == 0)
		i = strlen(str) / 2;

	else if (strlen(str) % 2 != 0)
		i = (strlen(str) - 1) / 2;

	for (; i <= strlen(str); i++)
	{
		_putchar(str[i]);
	}

	_putchar(10);
}
