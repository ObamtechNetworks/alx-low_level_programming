#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps integer values
 * @a: integer a
 * @b: integer b
 * Return: this functions does not return anything
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
