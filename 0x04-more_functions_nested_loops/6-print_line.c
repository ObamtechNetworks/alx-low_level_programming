#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: the integer count to print line
 * Return: 0 Always (Success)
 */
void print_line(int n)
{
	while (n--)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
