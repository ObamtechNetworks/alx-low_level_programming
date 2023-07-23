#include "main.h"
#include <limits.h>

/**
 * print_number - prints integer numbers
 * @n: the integer to print
 * Description: A function that prints integers
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_number(int n)
{
	int divisor, digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		_putchar(n + 48);
	}

	divisor = 1;

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
