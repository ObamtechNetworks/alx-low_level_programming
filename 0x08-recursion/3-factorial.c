#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: The number to find its factorial
 * Description: A function that returns the factorial of a given number
 * Using the recursion technique
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
