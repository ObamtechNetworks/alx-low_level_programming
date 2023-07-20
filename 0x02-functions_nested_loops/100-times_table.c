#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the 9 times table
 * @n: the timetable starts from 0
 * Description: A function that prints n times table
 * Author - Ipadeola Michael Bamidele
 * Return: returns nothing
 */

void print_times_table(int n)
{
	int i, j, product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				product = i * j;
				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar((product / 10) % 10 + 48);
				}
				else if (product < 99 && product >= 10)
					_putchar((product / 10) + 48);
				_putchar((product % 10) + 48);
			}
			_putchar('\n');
		}
	}
	_putchar(10);
}
