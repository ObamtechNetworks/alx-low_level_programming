#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: the integer count to print line
 * Return: 0 Always (Success)
 */
void print_line(int n)
{
	int length;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
			_putchar('_');
	}
	_putchar('\n');
}
