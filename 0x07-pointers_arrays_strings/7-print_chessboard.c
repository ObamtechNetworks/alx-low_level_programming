#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: A pointer to a 2D Array of 8 elements
 * Description: A function that prints a chessboard via a pointer
 * to a 2D array of 8 elements
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar(10);
	}
}
