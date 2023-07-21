#include "main.h"

/**
 * print_square - prints a square
 * @size: the n number of times to print the square
 * Description: A function that prints a square
 * n number of times
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_square(int size)
{
	int i = 1, j = 1;

	while (i <= size)
	{
		while (j <= i)
		{
			if (size <= 0)
				_putchar(10);
			_putchar('#');
			j++;
		}
		_putchar(10);
		j = 1;
		i++;
	}
}
