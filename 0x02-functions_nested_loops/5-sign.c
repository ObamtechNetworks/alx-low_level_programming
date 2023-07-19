#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: integer parameter for the function
 * Description: A function that prints
 * the sign of a number
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
