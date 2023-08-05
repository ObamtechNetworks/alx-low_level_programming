#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - A function that prints other char of a string
 * @str: a pointer to the string of characters to print
 * Description: A function that prints a other character
 * of a string, starting with the first character
 * followed by a new line
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar(10);
}
