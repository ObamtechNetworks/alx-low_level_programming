#include "main.h"

/**
 * print_line - A function that prints a line
 * @n: the n number of times to print the line
 * Description: A function that prints lines in
 * n number of times
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		if (n <= 0)
			_putchar(10);
		else
			_putchar(95);
		i++;
	}
	_putchar(10);
}
