#include "main.h"
/**
 * add - adds two integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - returns difference of two integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of a and b
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - multiplies two integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - returns the division of two integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the division result of a and b
 */
int div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}
/**
 * mod - returns the modulus of two integers a and b
 * @a: the first integer
 * @b: the second integer
 * Return: the modulus result of a and b
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
