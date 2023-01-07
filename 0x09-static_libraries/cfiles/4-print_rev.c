#include <string.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: the string pointer variable
 * Return: this function returns nothing
 */
void print_rev(char *s)
{
	int counter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		counter++;
	}
	for (n = (counter - 1); n >= 0; n--)
		_putchar(s[n]);
	_putchar('\n');
}
