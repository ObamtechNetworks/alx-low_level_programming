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
	int i = 1, j = 1;

	while (i <= n)
	{
		if (n <= 0)
			_putchar(10);
		else
		{
			while (j <= n)
			{
				_putchar(' ');
				_putchar(92);
				j++;
			}
			_putchar(10);
			j = 1;
			i++;
		}
	}
}
