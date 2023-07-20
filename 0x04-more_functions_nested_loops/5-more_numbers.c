#include "main.h"

/**
 * more_numbers - A function that prints a number set 10x
 * @void: receives nothing
 * Description: A function that prints numbers from
 * 0 - 14 ten times followed by a new line using _putchar
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 1, j = 0;

	while (i <= 10)
	{
		while (j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			j++;
		}
		j = 0;
		i++;
		_putchar(10);
	}
}
