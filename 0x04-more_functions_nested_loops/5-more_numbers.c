#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * void: this function receieves nothing
 * Return: 0 Always (Success)
 */
void more_numbers(void)
{
	int i, j = 0;

	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
		j++;
	}
}
