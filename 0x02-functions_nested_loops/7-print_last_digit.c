#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints last digit of an int
 * @number: receives any integer as argument
 * last_digit: computed last digit of the int
 * Description: A function that prints the
 * last digit of an integer
 * Author - Ipadeola Michael Bamidele
 * Return: Always 0 (Success)
 */

int print_last_digit(int number)
{
	int last_digit;

	if (number < 0)
		last_digit = -1 * (number % 10);
	else
		last_digit = number % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
