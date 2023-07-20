#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * except for 2 & 4
 * @void: receives nothing
 * Description: A function that prints numbers from
 * 0 - 9 except 2 and 4
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i != 50 && i != 52)
			_putchar(i);
		i++;
	}
	_putchar(10);
}
