#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the time table
 * @n: the parameter to print its time table
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int num, mult, res;

	if (num >= 0 && num <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				res = num * multi;
				if (res <= 99)
					_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10)) % 10 + '0');
				}
				else if (res <= 99 && res >= 10)
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
	return (0);
}
