#include "main.h"

/**
 * print_number - prints integer numbers
 * @n: the integer to print
 * Description: A function that prints integers
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_number(int n)
{
	/* convert number to unsigned value */
	long int value = n;

	/* check if number is negative */
	if (value < 0)
	{
		_putchar('-');
		value = -value;
	}

	/* print first values of digits */
	if ((value / 10) > 0)
		print_number(value / 10);
	
	/* get the last digit and print */
	_putchar((value % 10) + 48);
}
