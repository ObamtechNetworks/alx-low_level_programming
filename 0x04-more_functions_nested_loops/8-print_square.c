#include "main.h"
#include <stdio.h>
/**
 * print_square - prints a square followed by a new line
 * @size: the integer count to print square
 * Return: 0 Always (Success)
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');
			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
