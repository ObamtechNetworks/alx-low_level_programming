#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints integers from n to 98
 * @n: the parameter to start counting from
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (n = n; n < 98; n++)
	{
		while (n < 9)
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
			n++;
		}
		if ((n / 10) > 0)
		{
			putchar((n / 10) + '0');
			putchar((n % 10) + '0');
			putchar(',');
			putchar(' ');
		}
		if ((n / 10) == 9 && (n % 10) == 7)
		{
			putchar((98 / 10) + '0');
			putchar((98 % 10) + '0');
		}
	}
}
