#include "main.h"
/**
 * print_sign - prints signs
 * @n: the sign to print
 *  Return: void
 */
int print_sign(int n)
{
	for (n = 32; n <= 127; n++)
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
	return (0);
}
