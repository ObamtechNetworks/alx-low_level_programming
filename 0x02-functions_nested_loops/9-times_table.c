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
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			/**
			 * add comma and space
			 * every time you enter this loop
			 */
			_putchar(',');
			_putchar(' ');
			product = i * j;
			/**
			 * add space before digit only
			 * if product is
			 * less than or equal to 9
			 */
			if (product <= 9)
				_putchar(' ');
			/**
			 * if product is greater than 9
			 * get the first digit
			 */
			else
				_putchar((product / 10) + 48);

			/**
			 * then get the
			 * last digit and prepend
			 */
			_putchar((product % 10) + 48);
		}
		_putchar(10);
	}
}
