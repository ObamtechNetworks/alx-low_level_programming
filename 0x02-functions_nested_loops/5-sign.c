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
		_putchar('\n');
	}
	return (0);
}
