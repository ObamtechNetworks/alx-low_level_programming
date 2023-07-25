#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that prints n el. of an array of int
 * @a: a pointer to the array element
 * @n: size of the array
 * Description: A function that prints n elements of an array
 * of integers followed by a new line
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i <= n - 1)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}

	printf("\n");
}
