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
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
