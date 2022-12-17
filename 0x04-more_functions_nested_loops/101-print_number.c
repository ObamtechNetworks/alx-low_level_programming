#include "main.h"
#include <stdio.h>
/**
 * print_number - prints an integer
 * @n: the integer to print
 * Return: 0 Always (Success)
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = -i;
	}
	if ((i / 10) > 0)
		print_number(i / 10);
	_putchar((i % 10) + '0');
}
