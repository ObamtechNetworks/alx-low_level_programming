#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter to check for
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n < 0 || n > 0)
	{
		int last_digit;

		last_digit = n % 10;
		_putchar(last_digit + '0');
		_putchar('\n');
	}
	return (0);
}
