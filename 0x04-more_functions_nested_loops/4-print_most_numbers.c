#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - prints the no. from 0 - 9, except 2 and 4
 * void: this function receieves nothing
 * Return: 0 Always (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		_putchar(i);
	}
	_putchar('\n');
}
