#include "main.h"

/**
 * print_diagonal - prints diagonal lines at n times
 * @n: the n number of times to print the line
 * Description: A function that prints diagonal lines
 * n number of times
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar(10);
		}
	}
}
