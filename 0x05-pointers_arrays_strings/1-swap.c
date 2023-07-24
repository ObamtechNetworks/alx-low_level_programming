#include <stdio.h>

/**
 * swap_int - A function that swaps two integers' values
 * @a: the first pointer parameter
 * @b: the second pointer parameter
 * Description: A function that takes in two integers
 * and swap them when passsed as arguments to the function
 * Author - Ipadeola Michael Bamidele
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
