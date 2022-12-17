#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: the integer count to print line
 * Return: 0 Always (Success)
 */
void print_line(int n)
{
	n = 0;
	while (n < 5)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
