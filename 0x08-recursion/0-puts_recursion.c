#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string and new line using recursion technique
 * @s: The string to print
 * Description: A function that prints a string followed by a new line
 * To the standard output, using the recursion technique
 * Return: void
 */
void _puts_recursion(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(str + 1);
}
