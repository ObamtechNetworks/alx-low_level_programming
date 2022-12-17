#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a  triangle followed by a new line
 * @size: the integer count to print triangle
 * Return: 0 Always (Success)
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(' ');
			for (j == 0; j < i; j++)
				_putchar('#');
			if (i == size)
				continue;		}
	}
	_putchar('\n');
}
