#include <stdio.h>
#include "main.h"
/**
 * _abs - returns absolute value of an integer
 * @n: the parameter to check for
 * Return: Always 0.
 */
int _abs(int n)
{
	if (n <= 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
