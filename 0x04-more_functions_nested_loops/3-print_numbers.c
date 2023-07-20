#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9
 * @void: receives nothing
 * Description: A function that prints numbers
 * from 0 - 9
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
}
