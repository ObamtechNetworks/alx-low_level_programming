#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter to check for
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last_digit;
	
	if (n <= 0)
	{
		last_digit = n % 10;
	}
	else if (n >= 0)
		last_digit = n % 10;
	printf("%c", last_digit);
	return (0);
}
