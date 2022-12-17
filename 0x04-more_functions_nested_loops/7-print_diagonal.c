#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints a diagonal line
 * @n: the integer count to print line
 * Return: 0 Always (Success)
 */
void print_diagonal(int n)
{
	int leng, int gap;

	if (n > 0)
	{
		for (length = 0; length < n; length++)
		{
			for (gap = 0; gap < length; gap++)
				_putchar(' ');
			_putchar('\\');
			if (length == n - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
