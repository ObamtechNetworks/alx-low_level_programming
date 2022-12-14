#include "main.h"
/**
 * print_sign - prints signs
 * @n: the sign to print
 *  Return: void
 */
int print_sign(int n)
{
	for (n = 42; n <= 47; n++)
	{
		if (n > 0)
		{
			return (1);
			_putchar(43);
		}
		else if (n == 0)
		{
			return (0);
			_putchar(48);
		}
		else if (n < 0)
		{
			return (-1);
			_putchar(45);
		}
	}
}
