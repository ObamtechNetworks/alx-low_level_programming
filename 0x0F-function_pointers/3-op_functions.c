#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - a function that adds two numbers
 * @a: first integer
 * @b: second integer
 * Return: returns the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtract b from a
 * @a: first integer
 * @b: second integer
 * Return: returns the differencce of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides two integers
 * @a: the first integer
 * @b: the second integer
 * Return: returns the result of the division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that performs modulus operation on two integers
 * @a: the first integer
 * @b: the second integer
 * Return: returns the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return(a % b);
}
