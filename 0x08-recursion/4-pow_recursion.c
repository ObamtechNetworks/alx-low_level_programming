#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: The base number
 * @y: the power value
 * Description: A function that returns the value of x
 * raised to the power of y using the recursion technique
 * Return: x value to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);/* the factors to make the
				* repeated multiplication
				* continue
				*/
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
