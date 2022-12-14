#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table
 * @void: this function receives nothing
 * Return: Always 0.
 */
void times_table(void)
{
	int i, n, multiply;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (n = 1; n < 10; n++)
		{
			multiply = n * i;
			if ((multiply / 10) > 0)
			{
				_putchar((multiply / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((multiply % 10) + '0');
			if (n < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
