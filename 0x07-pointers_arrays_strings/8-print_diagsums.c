#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - A fxnprints the sum of two diagonals of a square matrix
 * @a: A pointer to a 2D Array of n elements
 * @size: The size of the array
 * Description: A function that prints the sum of two diagonals
 * of a square matrix of integers.
 * Where => two diagonals involves the -> main diagonal and
 * the secondary diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, main_diag_sum = 0, second_diag_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += *(a + i * size + i);
		second_diag_sum += *(a + i * size + (size - i - 1));
	}

	printf("%d, ", main_diag_sum);
	printf("%d\n", second_diag_sum);
}
