#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 * @void: receives nothing
 * Description: A function that prints the 9 times table
 * Author - Ipadeola Michael Bamidele
 * Return: returns nothing
 */

void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (product >= 10)
			{
				int firstValue, secondValue;

				firstValue = product / 10;
				secondValue = product % 10;
				_putchar((firstValue) + 48);
				_putchar((secondValue) + 48);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			}
			else
			{
				_putchar((product) + 48);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		putchar(10);
	}
}
