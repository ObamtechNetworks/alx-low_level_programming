#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the n number of times to print the square
 * Description: A function that prints a triangle
 * n number of times
 * Author: Ipadeola Michael Bamidele
 * Return: nothing
 */

void print_triangle(int size)
{
	int top = 1, bottom = 1;

	if (size <= 0)
		_putchar(10);

	while (top <= size)
	{
		while (bottom <= size)
		{
			if ((top + bottom) <= size)
				_putchar(' ');
			else
				_putchar('#');
			bottom++;
		}
		_putchar(10);
		bottom = 1;
		top++;
	}
}
