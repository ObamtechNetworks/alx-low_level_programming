#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: The string to print
 * Description: A function that prints a string in reverse order
 * To the standard output, using the recursion technique
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
