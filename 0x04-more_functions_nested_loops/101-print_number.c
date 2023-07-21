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

	/* check if number is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* print first values of digits */
	if ((n / 10) > 0)
		print_number(n / 10);

	/* get the last digit and print */
	_putchar((n % 10) + 48);
}
