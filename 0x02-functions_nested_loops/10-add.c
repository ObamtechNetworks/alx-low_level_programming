#include <stdio.h>
#include "main.h"
/**
 * add - adds two integer and returns the result
 * @a: the integers to add
 * @b: the second integer to add
 * Return: Always 0.
 */
int add(int a, int b)
{
	int sum;

	sum = a + b;
	if ((sum / 10) > 0)
	{
		_putchar((sum / 10) + '0');
		_putchar((sum % 10) + '0');
	}
	return (sum);
}
